class Solution {
public:
    vector<vector<int>> directions = {{1 , 0} , {-1 , 0} , {0 , 1} , {0 ,  -1}};
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
       
       // dijkstra's algo 
       
       int m = grid.size(); 
       int n = grid[0].size(); 

        vector<vector<int>> dist(m , vector<int>(n , INT_MAX)); 
        deque<pair<int , int>> dq ; 

        dist[0][0] = grid[0][0];
        dq.push_front({0 , 0}); 

        while(!dq.empty()){
            auto curr = dq.front(); 
            dq.pop_front(); 

            int x = curr.first ; 
            int y = curr.second; 

            if(x == m - 1 && y == n-1){
                return dist[x][y] < health; 
            }

            for(auto &dir : directions){
                int x_ = dir[0] + x ; 
                int y_ = dir[1] + y ; 

                if(x_ < 0 || x_ >= m || y_ < 0 || y_ >= n) continue ; 

                int w = grid[x_][y_]; 

                if(dist[x][y] + w < dist[x_][y_]){
                    dist[x_][y_] = dist[x][y] + w; 

                    if(w == 0){
                        dq.push_front({x_ , y_});
                    }else{
                        dq.push_back({x_ , y_});
                    }
                }
            }
        }
        return dist[m-1][n-1] < health; 
       
    }
};
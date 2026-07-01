class Solution {
public:
    vector<vector<int>> directions = {{0, 1} , {0,-1} , {1 ,0} , {-1 , 0}};
    int maximumSafenessFactor(vector<vector<int>>& grid) {

        // multi-source BFS + DIJKSTRA'S

        int m = grid.size(); 
        int n= grid[0].size(); 

        queue<pair<int , int>> q ; 

        vector<vector<int>> dist(m , vector<int>(n , -1)); 

        for(int i = 0 ; i < m; i++){
            for(int j = 0 ; j < n ; j++){

                if(grid[0][0] == 1 || grid[m-1][n-1] == 1) return 0; 

                if(grid[i][j] == 1){
                    q.push({i,j});
                    dist[i][j] = 0 ; 
                }
            }
        }

        while(!q.empty()){

            auto curr = q.front(); 
            q.pop(); 

    
            int x = curr.first; 
            int y = curr.second; 

            for(auto &dir:directions){
                int x_ = dir[0] + x ; 
                int y_ = dir[1] + y ; 

                if(x_ >= 0 && x_ < m && y_ >= 0 && y_ < n && dist[x_][y_] == -1){
                    dist[x_][y_] = dist[x][y] + 1 ; 
                    q.push({x_,y_});
                }
            }
        }

        vector<vector<int>> vis(m , vector<int>(n , 0)); 
        priority_queue<pair<int, pair<int , int >>> pq; 
        pq.push({dist[0][0] , {0 , 0}}); 
        vis[0][0] = 1 ; 

        while(!pq.empty()){
            auto curr = pq.top(); 
            pq.pop(); 

             int d = curr.first; 
            int x = curr.second.first; 
            int y = curr.second.second;

            if(x == m - 1 && y == n - 1) return d ; 
            
            for(auto &dir:directions){
                int x_ = dir[0] + x ; 
                int y_ = dir[1] + y ;
                

                if(x_ >= 0 && x_ < m && y_ >= 0 && y_ < n && !vis[x_][y_]){
                    vis[x_][y_] = 1 ; 
                    int newd = min(d , dist[x_][y_]);
                    pq.push({newd , {x_, y_}});
                }
                
            }

        }


        return -1; 

        
        
    }
};
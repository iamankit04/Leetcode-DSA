class Solution {
public:
    unordered_map<int , vector<pair<int , int>>> mp ={ 
    {1 , {{0 , -1} , {0 , 1}}},   
    {2 , {{-1 , 0} , {1 , 0}}},  
    {3 , {{0 , -1} , {1 , 0}}},  
    {4 , {{0 , 1} , {1 , 0}}},  
    {5 , {{0 , -1} , {-1 , 0}}},  
    {6 , {{0 , 1} , {-1 , 0}}}
    }; 

    bool hasValidPath(vector<vector<int>>& grid) {
        
        int n = grid.size(); 
        int m = grid[0].size(); 

        vector<vector<bool>>vis(n , vector<bool>(m , false)); 

        queue<pair<int , int >> q ; 
        vis[0][0] = true ; 
        q.push({0 , 0}); 

        while(!q.empty()){

            auto curr = q.front(); 
            q.pop(); 

            int x = curr.first; 
            int y = curr.second; 

            if(x == n - 1 && y == m - 1) return true ; 

            for(auto &dir : mp[grid[x][y]]){
                int new_x = dir.first+ x ; 
                int new_y = dir.second + y ; 

                if(new_x < 0 || new_x >= n || new_y < 0 || new_y >= m || vis[new_x][new_y]) continue ; 


                for(auto [rx , ry] : mp[grid[new_x][new_y]]){
                    
                    // reverse
                    if(new_x + rx == x && new_y + ry == y){
                        q.push({new_x , new_y}); 
                        vis[new_x][new_y] = true ; 
                        break ; 
                    }
                }
            }
        }

        return false ; 
    }
};
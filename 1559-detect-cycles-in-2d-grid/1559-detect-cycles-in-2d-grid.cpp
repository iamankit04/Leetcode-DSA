class Solution {
public:
    int m , n ; 
    vector<vector<int>> direction= {{0, 1} , {0, -1} , {1 , 0} , {-1, 0}};
    bool dfs(int r , int c , int pr , int pc , vector<vector<char>>& grid , vector<vector<bool>> & vis ){

        if(vis[r][c] == true){
            return true; 
        }

        vis[r][c] = true ; 

        for(auto & dir : direction){
            int new_r = dir[0] + r ; 
            int new_c = dir[1] + c ; 

            if(new_r >= 0 && new_r < m && new_c >=0 && new_c < n && grid[r][c] == grid[new_r][new_c]){

                if(new_r == pr && new_c == pc) continue ; 
                if(dfs(new_r , new_c , r , c , grid , vis)){
                    return true ; 
                }
            }
        }

        return false ;
    }
    bool containsCycle(vector<vector<char>>& grid) {

        m= grid.size(); 
        n = grid[0].size(); 

        vector<vector<bool>> vis(m , vector<bool>(n , false));

        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(!vis[i][j] && dfs(i, j , i , j , grid , vis)){
                        return true ; 
                }
            }
        }

       return false ; 
        
    }
};
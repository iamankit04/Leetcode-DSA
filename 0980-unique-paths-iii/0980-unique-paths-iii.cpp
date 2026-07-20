class Solution {
public:
    int m , n , nonobs , res = 0 ; 
    vector<vector<int>> directions = {{1 , 0} , {-1 , 0} , {0 , 1} , {0 , -1}}; 
    void solve(vector<vector<int>>& grid , int i , int j , int cnt){

        if(i >= m || i < 0 || j >= n || j < 0 || grid[i][j] == -1) return ; 

        if(grid[i][j] == 2){
            if(cnt == nonobs){
                 res++; 
            }
            return ; 
        }

        grid[i][j] = -1 ; 

        for(auto &dir : directions){
            int i_ = i + dir[0]; 
            int j_ = j + dir[1]; 

            solve(grid , i_ , j_ , cnt + 1);
        }

        grid[i][j] = 0 ; 
    }
    int uniquePathsIII(vector<vector<int>>& grid) {

        // Backtracking

        m = grid.size(); 
        n= grid[0].size(); 

        int x = 0 , y = 0 ;

        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){

                if(grid[i][j] == 0) nonobs++;

                if(grid[i][j] == 1) {
                    x = i ; 
                    y = j ; 
                }
            }
        }

        nonobs++; 

        solve(grid , x , y , 0); 

        return res; 
        
    }
};
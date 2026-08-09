class Solution {
public:
    int m , n ; 
    vector<vector<int>> directions = {{1, 0},{-1 , 0} , {0,1} , {0,-1}};
    void dfs(vector<vector<char>>& grid , int i , int j ,  vector<vector<int>>&vis){

        if(i >= m || i < 0 || j >= n  || j < 0) return ; 

        if (grid[i][j] == '0')
                  return;

        if (vis[i][j])
            return;

        vis[i][j] = 1 ; 

        for(auto &dir : directions){
            int i_ = i + dir[0];
            int j_ = j + dir[1];

           

            dfs(grid, i_ , j_ , vis);


        }
    }
    int numIslands(vector<vector<char>>& grid) {

         m = grid.size(); 
         n = grid[0].size(); 

        vector<vector<int>>vis(m , vector<int>(n , 0)); 

        int ans = 0 ; 

        for(int i = 0 ;  i < m ; i++){
            for(int j = 0; j < n ; j++){

                if(grid[i][j] == '1'){
                    if(!vis[i][j]){
                        dfs(grid , i, j, vis);
                        ans++;
                    }
                }
            }
        }

        return ans ; 
        
    }
};
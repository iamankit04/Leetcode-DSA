class Solution {
public:
    int m , n ; 
    void dfs(int i , int j  , vector<vector<int>>& grid2){

        if(i >= m || i < 0 || j >= n || j < 0 || grid2[i][j] == 0){
            return ; 
        }
        grid2[i][j] = 0 ; 
        dfs(i-1 , j , grid2) ; 
        dfs(i+1 , j , grid2); 
        dfs(i , j-1 , grid2); 
        dfs(i , j + 1 , grid2); 
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
         // DFS 

         
         m = grid1.size(); 
         n = grid1[0].size(); 

         for(int i =  0 ; i < m ; i++){
            for(int j = 0 ; j  < n;  j++){

                if(grid2[i][j] == 1 && grid1[i][j] == 0){
                    dfs(i , j , grid2) ; 
                }
            }
         }

         int c = 0 ;

           for(int i =  0 ; i < m ; i++){
            for(int j = 0 ; j  < n;  j++){

                if(grid2[i][j] == 1){
                    dfs(i , j , grid2) ; 
                    c++;
                }
            }
         } 

         return c ; 
    }
};
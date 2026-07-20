class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {

        int  m = grid.size(); 
        int n = grid[0].size(); 

        vector<int> arr; 

        k = k % (m*n) ; 

        for(int i =  0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                arr.push_back(grid[i][j]); 
            }
        }

         vector<int> arr1;

         int h = arr.size(); 

         for(int i = h - k ; i < h ; i++){
              arr1.push_back(arr[i]);
         }

         for(int i = 0 ;  i < h - k ; i++){
            arr1.push_back(arr[i]);
         }

         vector<vector<int>> res(m , vector<int>(n ));
         int z = 0 ; 
         for(int i = 0 ;  i < m ; i++){
            for(int j = 0 ;  j < n ; j++){
                res[i][j] = arr1[z++];
            }
         }
        return res; 
    }
};
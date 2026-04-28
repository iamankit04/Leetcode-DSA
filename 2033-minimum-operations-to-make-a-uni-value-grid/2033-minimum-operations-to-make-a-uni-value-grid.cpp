class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        
        int m = grid.size(); 
        int n = grid[0].size(); 

        vector<int> ans; 

        for(int i = 0 ;  i < m ; i++){
            for(int j = 0 ; j  < n ; j++){
                 ans.push_back(grid[i][j]); 
            }
        }

        int mod = ans[0] % x ; 

        for(auto &it : ans){
            if(it % x != mod){
                return -1 ; 
            }
        }

        sort(begin(ans) , end(ans));

        int middle = ans[(m*n)/2]; 

        int op = 0 ; 

        for(auto &it : ans){
            op += abs(it - middle)/x;
        }

        return op ; 
    }
};
class Solution {
public:
    typedef long long ll;
    bool canPartitionGrid(vector<vector<int>>& grid) {

        int m = grid.size(); 
        int n = grid[0].size(); 

        vector<ll> rsum(m , 0) ; 
        vector<ll> csum(n , 0) ; 

        ll ts = 0 ;  

        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                ts += grid[i][j] ; 
                rsum[i] += grid[i][j] ; 
                csum[j] += grid[i][j] ; 
            }
        }

        if(ts % 2 != 0) return false ; 

         ll h = 0 ;  
         for(int i = 0 ;  i < m - 1 ; i++){
            h += rsum[i] ; 

            if(h == ts - h){
                return true ; 
            }
         }

         ll v = 0 ; 
         for(int j = 0 ; j < n - 1 ; j++){
            v += csum[j]; 

            if(v == ts - v) return true ; 
         }

         return false ; 
        
    }
};
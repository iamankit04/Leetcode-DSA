class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size(); 
        int n = grid[0].size(); 
        vector<int> rone(m , 0) ; 
        vector<int> rz(m , 0) ; 
        vector<int>cone(n , 0) ; 
        vector<int>cz(n , 0) ; 

        for(int i =  0 ; i  < m;  i++){
            for(int j = 0 ; j  < n;  j++){
                if(grid[i][j] == 1){
                    rone[i]++; 
                    cone[j]++;
                }else{
                    rz[i]++;
                    cz[j]++;
                }
            }

        }

        vector<vector<int>> diff(m , vector<int>(n ,0)); 

        for(int i = 0 ;  i < m ; i++){
            for(int j = 0 ;  j < n ; j++){
                diff[i][j] = rone[i] + cone[j] - rz[i] - cz[j];
            }
        }

        return diff; 
        
    }
};
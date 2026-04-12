class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {

        int n = matrix.size(); 
        vector<int> res;  
      

        for(int i = 0  ; i < n; i++){

            int c = count(matrix[i].begin() , matrix[i].end() , 1); 

            res.push_back(c) ; 
        }

        return res; 
        
    }
};
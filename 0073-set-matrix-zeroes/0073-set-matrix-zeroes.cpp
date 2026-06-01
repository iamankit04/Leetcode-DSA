class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int n = matrix.size(); 
        int m = matrix[0].size();

        stack<pair<int , int>> st ; 

        for(int i = 0 ; i  < n ; i++){
            for(int j = 0 ; j < m; j++){
                if(matrix[i][j] == 0){
                    st.push({i, j}); 
                }
            }
        }

        while(!st.empty()){

            auto curr = st.top(); 
            st.pop(); 

            int r = curr.first ; 
            int c = curr.second; 

            for(int i = 0 ; i < m ; i++){
                matrix[r][i] = 0 ; 
            }

            for(int j = 0 ; j < n ; j++){
                matrix[j][c] = 0 ; 
            }
        }
        
    }
};
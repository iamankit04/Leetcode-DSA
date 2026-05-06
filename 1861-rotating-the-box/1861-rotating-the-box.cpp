class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {

        // two pointer

        int n = boxGrid.size(); 
        int m = boxGrid[0].size(); 

        vector<vector<char>> res(m , vector<char>(n , '.'));

        for(int i = 0 ; i < n ; i++){

            int k = m - 1 ; 

            for(int j = m - 1 ; j >= 0; j--){

                if(boxGrid[i][j] == '*'){
                    res[j][n-1-i] = '*';
                    k = j - 1 ; 
                }else if(boxGrid[i][j] == '#'){
                    res[k][n-1-i] = '#';
                    k--;
                }
            }
        }

        return res; 
        
    }
};
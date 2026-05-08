class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {

        int x = 0 , y = 0 ; 


        vector<vector<int>> grid(n , vector<int>(n));

        for(int i = 0 ; i < n; i++){
            for(int j = 0 ; j  <n; j++){
                grid[i][j] = (i*n)+j;
            }
        }


        for(auto &it : commands){
            if(it == "DOWN"){
                x++;
            }else if(it == "UP"){
                x--; 
            }else if(it == "LEFT"){
                y--;

            }else if(it == "RIGHT"){
                y++;
            }
        }

        return grid[x][y];
        
    }
};
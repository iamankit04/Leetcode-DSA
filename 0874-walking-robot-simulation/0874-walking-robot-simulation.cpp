class Solution {
public:
    vector<vector<int>> direction = { {0 , 1}  , {1 , 0} , {0,-1} , {-1 , 0}};
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        
        //  SIMULATION
    
        set<pair<int , int >> st ; 

        for(auto &a : obstacles){
            st.insert({a[0] , a[1]});
        }

        int x = 0 , y = 0 , dir = 0 ; 
        int maxd = 0 ; 

        for(auto &it : commands){

            if(it == -1){
                dir = (dir + 1) % 4; 
            }else if(it == -2){
                dir = (dir + 3) % 4; 
            }else{
                while(it--){
                    int x_ = x + direction[dir][0]; 
                    int y_ = y + direction[dir][1]; 

                    if(st.count({x_ , y_})) break ; 

                    x = x_; 
                    y = y_ ; 

                    maxd = max(maxd , x * x + y*y);
                }
            }
        }

     return maxd ; 
        
        
    }
};
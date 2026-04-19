class Solution {
public:
    vector<vector<int>> direction = {{1 , 0} , {-1 , 0} , {0, 1} , {0 , -1}};
    vector<vector<int>> colorGrid(int n, int m, vector<vector<int>>& sources) {

        //BFS
        
        vector<vector<int>> res(n , vector<int>(m , 0));

        queue<pair<int , int >> q ; 
        int tc = 0 ; 

        for(auto &it : sources){
           int r = it[0] ; 
           int c = it[1]; 
           int color = it[2]; 
           res[r][c] = color; 
           tc++; 
           q.push({r , c});
        }

        while(!q.empty() && tc < m * n){

            int s = q.size(); 
            map<pair<int , int > , int > mp ; 

            while(s--){
                auto curr = q.front(); 
                q.pop(); 

                int r1 = curr.first ; 
                int c1 = curr.second ; 

                for(auto dir : direction){
                    int r1_ = r1 + dir[0]; 
                    int c1_ = c1 + dir[1] ; 

                    if(r1_ >= 0 && r1_ < n && c1_ >=0 && c1_ < m && res[r1_][c1_] == 0){

                        mp[{r1_ , c1_}] = max(mp[{r1_ , c1_}] , res[r1][c1]);
                    }
                }


            }

            for(auto &it : mp){
                int r = it.first.first; 
                int c = it.first.second ; 
                int color = it.second ; 
                res[r][c] = color; 
                tc++; 
                q.push({r , c}); 
            }
        }

        return res; 
    }
};
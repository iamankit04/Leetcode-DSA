class Solution {
public:
    int N ;
    unordered_map<string , double> mp ; 
    vector<vector<int>> direction = {{-2 , 1} , {-1 , 2} , {1 , 2} , {2 , 1} , {2 , -1} , {1 , -2} , {-1 , -2} , {-2 , -1}}; 
    double solve(int k , int r , int c){

        if(r < 0 || r >= N || c < 0 || c >= N )
             return 0; 

        if(k ==0 ) return 1 ; 

        string key = to_string(k) + "-" + to_string(r) + "-" + to_string(c) ; 

        if(mp.count(key)){
            return mp[key] ; 
        }
        double ans = 0 ; 

        for(auto dir : direction){
            int r_ = r + dir[0] ; 
            int c_ = c + dir[1] ;

            ans +=(double)solve(k-1 , r_ , c_); 
        }

        return mp[key] = (double)ans/8.0; 
    }
    double knightProbability(int n, int k, int row, int col) {

        // RECUR + MEMO 

        N = n ; 

        return solve(k, row , col) ; 
        
    }
};
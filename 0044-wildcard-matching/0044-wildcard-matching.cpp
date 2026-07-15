class Solution {
public:
    int t[2001][2001];
    bool solve(string &s , string&p , int m , int n){

        if(m < 0 && n < 0) return true; 
        if(m >= 0 && n < 0) return false ; 

        if(m < 0 && n >= 0){
            for(int k = n ; k >= 0 ; k--){
                if(p[k] != '*') return false ; 
            }

            return true ; 
        }

        if(t[m][n] != -1) return t[m][n]; 

        if(s[m] == p[n] || p[n] == '?'){
            return t[m][n] = solve(s , p , m - 1, n - 1 );
        }else if(p[n] == '*'){
            return t[m][n] =  solve(s , p , m - 1 , n) || solve(s , p , m , n - 1); 
        }

        return false ; 
    }
    bool isMatch(string s, string p) {

        int m = s.length(); 
        int n = p.length(); 

        memset(t , -1 , sizeof(t)); 

        return solve(s , p , m - 1 ,  n - 1);
        
    }
};
class Solution {
public:
    int reverseDegree(string s) {

        int n = s.length(); 
        int ans = 0 ; 

        for(int i = 1 ; i <= n ; i++){

            char ch = s[i-1]; 
            int v  = 'z' - ch + 1 ; 
            
            ans += v*i ; 
        }
        return ans ; 
    }
};
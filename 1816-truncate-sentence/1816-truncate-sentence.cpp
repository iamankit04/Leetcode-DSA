class Solution {
public:
    string truncateSentence(string s, int k) {

        int n  = s.length(); 
        string ans = "" ; 
        
        
        for(int i = 0 ; i  < n && k > 0;  i++){
            if(s[i] == ' ') k--; 
            if(k <= 0) break ; 
            ans += s[i];
        }

        return ans ; 
        
    }
};
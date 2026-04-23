class Solution {
public:
    string replaceDigits(string s) {

        int n = s.length() ; 
        char prev ; 

        string s1 = ""; 

        for(int i = 0 ;  i < n ; i++){
            if(isdigit(s[i])){
                s1 += (prev + (s[i] - '0'));
            }else{
                s1 += s[i];
                prev = s[i];
            }
        }
        return s1;
    }
};
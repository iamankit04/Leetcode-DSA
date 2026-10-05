class Solution {
public:
    int scoreOfParentheses(string s) {

        int d = 0 , sc = 0 ; 

        for(int i = 0 ; i < s.length() ; i++){

            if(s[i] == '('){
                d++;
            }else{
                d--; 

                if(s[i-1] == '('){
                    sc += pow(2 , d);
                }
            }
        } 
        
        return sc ; 
    }
};
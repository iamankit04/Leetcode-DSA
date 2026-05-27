class Solution {
public:
    bool repeatedSubstringPattern(string s) {

        int n = s.length(); 
        int i = 1 ;

        while(i <= n /2 ){

            if(n % i == 0){

                string a = s.substr(0, i);
                string r = "";

                for(int j = 0; j < n / i; j++){
                    r += a;
                }

                if(r == s) return true; 
            }

            i++;


        }

        return false ; 
        
    }
};
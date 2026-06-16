class Solution {
public:
    string processStr(string s) {

        string res ; 

        int n = s.length(); 

        for(int i = 0 ;  i < n; i++){

            if(s[i] == '#'){
                res += res ; 
            }else if(s[i] == '%'){
                reverse(begin(res) , end(res));
            }else if(s[i] == '*'){
                int n = res.length(); 
                string temp = res ; 
                res = "";

                for(int j = 0 ; j < n - 1;  j++){
                    res += temp[j];
                }

            }else if (s[i] >= 'a' && s[i] <= 'z'){
                res += s[i];
            }
        }
        return res; 
    }
};
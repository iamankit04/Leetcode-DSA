class Solution {
public:
    string reverseParentheses(string s) {

        int n = s.length();

        stack<int> st ; 

        string res = ""; 

        for(int i = 0 ; i < n ; i++){

            if(s[i] == '('){
                st.push(res.length());
            }else if(s[i] == ')'){
                int start = st.top(); 
                st.pop(); 
                int end = res.length() - 1 ; 

                reverse(res.begin() + start , res.end());
            }else{
                res += s[i];
                
            }
        }
       return res ; 

        
    }
};
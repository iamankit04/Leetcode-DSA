class Solution {
public:
    bool isValid(string s) {

        stack<char> st ; 

        for(auto &it : s){

            if(st.empty() || it == '(' || it == '[' || it == '{'){
                st.push(it);
                continue ; 
            }

            if(it == ')'){

                if(st.top() == '(' ){
                    st.pop(); 
                }else{
                    return false ; 
                }
            } else  if(it == ']'){

                if(st.top() == '[' ){
                    st.pop(); 
                }else{
                    return false ; 
                }
            }else  if(it == '}'){

                if(st.top() == '{' ){
                    st.pop(); 
                }else{
                    return false ; 
                }
            }else{
                return false ; 
            }
        }
        return st.empty(); 
    }
};
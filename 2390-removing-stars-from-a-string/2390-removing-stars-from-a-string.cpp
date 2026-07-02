class Solution {
public:
    string removeStars(string s) {

        stack<char> st ; 

        for(auto &it : s){
           if(it != '*'){
               st.push(it);
           }else{
              st.pop();
           }
        }
        string a = "" ; 

        while(!st.empty()){
            auto curr = st.top();
            st.pop(); 

            a += curr ; 
        }

        reverse(begin(a) , end(a)); 

        return a; 
    }
};
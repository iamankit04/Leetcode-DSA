class Solution {
public:
    int balancedStringSplit(string s) {

        int n = s.length(); 

        stack<char>st ;
        int cnt = 0 ;  
        char c ; 

        for(auto &it : s){

            if(st.empty()){
                c = it ; 
            }

            if(it == c){
                st.push(it) ; 
            }else{
                st.pop();
            }

            if(st.empty()){
                 cnt++;
                 
            }
        }

        return cnt ; 
        
    }
};
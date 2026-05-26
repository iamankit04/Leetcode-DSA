class Solution {
public:
    int calPoints(vector<string>& operations) {

        stack<string> st ; 

        int i = 0 ; 
        int n = operations.size(); 

        while(i < n){

            if(operations[i] == "D"){
                int x = stoi(st.top());
              
                x *= 2 ; 
                st.push(to_string(x));
            }else if(operations[i] == "C"){
                st.pop();
            }else if(operations[i] == "+"){
                int x = stoi(st.top());
                st.pop();
                int y = stoi(st.top());
                st.pop();
                int z = x + y ;
                st.push(to_string(y));
                st.push(to_string(x));
                 
                st.push(to_string(z));
            }else{
                st.push(operations[i]);
            }

            i++;
        }

        int c = 0 ; 
        while(!st.empty()){
            int y = stoi(st.top());
            st.pop(); 
             c += y ; 
        }

        return c; 
        
    }
};
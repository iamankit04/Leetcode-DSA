class Solution {
public:
    int passwordStrength(string password) {

        unordered_set<char> st ; 

        for(auto &it : password){
            st.insert(it); 
        }
        int c = 0 ; 

        for(auto &ch : st){
            

            if (ch >= 'A' && ch <= 'Z') c +=2 ; 
            else if (ch >= 'a' && ch <= 'z') c++;
            else if (ch >= '0' && ch <= '9') c += 3 ; 
            else c+=5;
   
        }
        return c ; 
        
    }
};
class Solution {
public:
    unordered_set<char> st = {'a' , 'e' , 'i' , 'o' , 'u' , 'A' , 'E' , 'I' , 'O' , 'U'};
    bool halvesAreAlike(string s) {

        int n = s.length(); 

        int i = 0  , j = n/2  , lc= 0 , rc = 0; 


        while(j < n){

            if(st.count(s[i])){
                lc++;
            }

            if(st.count(s[j])){
                rc++;
            }

            i++;
            j++;
        }

        return lc == rc; 
        
    }
};
class Solution {
public:
    int numberOfSpecialChars(string word) {

        vector<bool>v(26 , 0) ;
        vector<bool>v1(26 , 0) ; 

        for(auto &it : word){

            if(it >= 'A' && it <= 'Z'){
                v[it - 'A'] = true; 
            }
        }

         for(auto &it : word){

            if(it >= 'a' && it <= 'z'){
                v1[it - 'a'] = true; 
            }
        }

        int n = v.size(); 

        int c = 0 ; 

        for(int i = 0 ; i < n; i++){
            if(v[i] && v1[i]) c++;
        }

        return c; 
        
    }
};
class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {

        string s1 = "" ; 
        int n = words.size(); 

        for(int i = 0 ;  i < n; i++){
            s1 += words[i][0];
        }

        return s1 == s ; 
        
    }
};
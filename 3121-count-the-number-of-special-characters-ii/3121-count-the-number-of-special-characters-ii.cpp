class Solution {
public:
    int numberOfSpecialChars(string word) {

        int ans = 0; 

        for(char ch = 'a' ; ch <= 'z' ; ch++){

            int w = word.find_last_of(ch);
            int q = word.find(toupper(ch)); 

            if(w != string :: npos && q != string :: npos && w < q) ans++;
        }

        return ans; 
        
    }
};
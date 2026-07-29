class Solution {
public:
    string smallestPalindrome(string s) {

        // Hashing 

        
        int n = s.length(); 

        vector<int> hash(26 , 0); 

        for(int i = 0 ; i < n / 2 ; i++){
            hash[s[i] - 'a']++;
        }
        int idx = 0 ; 
        for(int i = 0 ;  i < 26; i++){
            int c = hash[i]; 

            while(c--){
                s[idx++] = (char)(i + 'a');
            }
        }

        for(int i = 0 ; i < n / 2 ; i++){
            s[n - i - 1] = s[i];
        }
        return s ; 
    }
};
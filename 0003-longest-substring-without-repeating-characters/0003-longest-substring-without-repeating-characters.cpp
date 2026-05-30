class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        // using freq array 

        int n = s.length();

        vector<int> freq(256 , -1);
        int maxl = 0 , start = -1 ; 

        for(int i = 0 ; i  < n; i++){

            if(freq[s[i]] > start){
                start = freq[s[i]];
            }

            freq[s[i]] = i ; 

            maxl = max(maxl , i - start) ; 
        }
        return maxl; 
    }
};
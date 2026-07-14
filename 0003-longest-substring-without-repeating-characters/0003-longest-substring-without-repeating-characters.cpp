class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n = s.length(); 

        if(s == "") return 0 ;

        vector<int> freq(256 , 0); 

        int i =  0 , j =  0 , ans = INT_MIN ; 

        while(j < n){

            freq[s[j]]++;

            while(freq[s[j]] > 1){
                freq[s[i]]--;
                i++;
            }

            ans = max(ans , j - i + 1); 
            j++;
        }

        return ans ; 
    }
};
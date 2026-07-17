class Solution {
public:
    int characterReplacement(string s, int k) {

        // sliding window with map 

        unordered_map<char , int> mp ; 

        int i = 0 , j = 0 , ans = INT_MIN ; 

        int n = s.length(); 

        while(j < n){

            mp[s[j]]++; 

            int maxf = 0 ; 

            for(auto &it : mp){
                maxf = max(maxf , it.second); 
            }

            while((j - i + 1) - maxf > k){

                mp[s[i]]--; 

                if(mp[s[i]] == 0){
                    mp.erase(s[i]);
                }

                i++;

                 for(auto &it : mp){
                maxf = max(maxf , it.second); 
            }

            }

            ans = max(ans , j - i + 1); 
            j++;
        }
        return ans;  
    }
};
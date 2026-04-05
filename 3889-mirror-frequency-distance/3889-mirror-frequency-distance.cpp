class Solution {
public:
    int mirrorFrequency(string s) {

        int n = s.length(); 

        unordered_map<char , int> mp ; 

        for(auto &a : s){
            mp[a]++;
        }

        int sum = 0 ; 
        
        for(int i = 0 ;  i < n; i++){

            

            if(isalpha(s[i])){

                if(mp[s[i]] == 0) continue ; 

                char ch = 'z' - (s[i] - 'a'); 

                if(mp[ch]){
                    sum += abs(mp[s[i]] - mp[ch]);
                    mp[ch] = 0; 
                }else{
                    sum += mp[s[i]];
                }
                
            }

            else if(isdigit(s[i])){

                 char ch = '9' - (s[i] - '0'); 

                if(mp[ch]){
                    sum += abs(mp[s[i]] - mp[ch]);
                    mp[ch] = 0;
                }else{
                    sum += mp[s[i]];
                }

            }

            mp[s[i]] = 0 ; 

        }

        return sum ; 
    }
};
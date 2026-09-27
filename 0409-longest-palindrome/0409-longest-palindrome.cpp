class Solution {
public:
    int longestPalindrome(string s) {

        unordered_map<char , int> mp ; 

        for(auto &it : s){
            mp[it]++;
        }

         
        int ans = 0 ; 
        bool flag = false;

        for(auto &it : mp){

           

             ans += ( (it.second/2)*2) ;

             if(it.second % 2 == 1){
                 flag = true ; 
             } 

            
        }

        if(flag) ans++;

        return ans ; 
        
    }
};
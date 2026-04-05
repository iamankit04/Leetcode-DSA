class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {

        unordered_map<int , int > mp ; 

        for(auto &it : nums){
            mp[it]++; 
        }

        int count = 0 ;
        int ans = 0 ; 

        for(auto &it : mp){
            count += it.second/2; 
            if(it.second % 2 != 0){
                ans++;
            }
        }
        return {count , ans} ; 
    }
};
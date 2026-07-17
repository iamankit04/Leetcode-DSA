class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int , int> mp ; 

        for(auto &it : nums){
            mp[it]++; 
        }

        vector<pair<int , int >> p ; 

        for(auto &it : mp){

            p.push_back({it.second , it.first});
        }

        sort(begin(p) , end(p) , greater<pair<int , int>>());

        vector<int> ans ; 

        for(int i  = 0 ; i < k ; i++){
            ans.push_back(p[i].second);
        }
        return ans ; 
    }
};
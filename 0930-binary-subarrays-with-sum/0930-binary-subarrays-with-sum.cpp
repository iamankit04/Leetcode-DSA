class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        int n = nums.size(); 

        unordered_map<int , int> mp; 

        int csum = 0 , cnt = 0 ; 
        mp[0] = 1 ; 

        for(int i = 0 ; i < n ; i++){

            csum += nums[i]; 
            int rsum = csum - goal; 

            if(mp.count(rsum)) cnt += mp[rsum];

            mp[csum]++;
        }
        return cnt ; 
    }
};
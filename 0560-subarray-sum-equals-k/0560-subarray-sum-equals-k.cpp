class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int n = nums.size();

        int count = 0 ;  

        unordered_map<int , int> mp; 

        int csum = 0 ; 

        mp[0] = 1 ; 

        for(int i = 0; i < n ; i++){

            csum += nums[i]; 

            int rsum = csum - k; 

            if(mp.count(rsum)) {
                count += mp[rsum]; 
            }

            mp[csum]++;
        }
        return count ; 
    }
};
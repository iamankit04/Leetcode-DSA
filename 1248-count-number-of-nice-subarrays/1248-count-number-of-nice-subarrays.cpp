class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
         int n = nums.size(); 
        for(int i = 0 ; i < n ; i++){
            if(nums[i] % 2 == 0){
                nums[i] = 0 ; 
            }else{
                nums[i] = 1 ; 
            }
        }

        
        unordered_map<int , int> mp; 

        int csum = 0 , cnt = 0 ; 
        mp[0] = 1 ; 

        for(int i = 0 ; i < n ; i++){

            csum += nums[i]; 
            int rsum = csum - k; 

            if(mp.count(rsum)) cnt += mp[rsum];

            mp[csum]++;
        }
        return cnt ; 
        
    }
};
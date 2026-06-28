class Solution {
public:
    typedef long long ll; 
    long long maxSum(vector<int>& nums, int k, int mul) {

        sort(begin(nums) , end(nums) , greater<int>()); 

        int n = nums.size(); 

        ll sum = 0; 

        for(int i = 0 ; i < k ; i++){
          
           if(mul > 0){
              ll ans = (ll)((ll)nums[i] * (ll)mul) * 1LL ; 
              sum += ans ; 
              mul--; 
           }else{
              sum += nums[i];
           }

        }
        return sum ; 
    }
};
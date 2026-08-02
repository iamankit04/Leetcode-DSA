class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {

        long long ans = LLONG_MIN;

        int n = nums.size(); 

        for(int i = 0 ; i < n ; i++){
            for(int j = i + 1 ; j < n ; j++){

                long long k = __gcd(nums[i] , nums[j]);

                long long prod = 1LL * nums[i] * nums[j];

                long long s = prod / (k*k);

                ans = max(ans , s); 
            }
        }
        return ans ; 
    }
};
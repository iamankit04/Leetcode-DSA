class Solution {
public:
    int findGCD(vector<int>& nums) {

        int n = nums.size(); 

        sort(begin(nums) , end(nums)); 

        int k = __gcd(nums[0] , nums[n-1]);

        return k ; 
        
    }
};
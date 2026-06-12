class Solution {
public:
    int findGCD(vector<int>& nums) {

        sort(begin(nums) , end(nums)); 

        int m = __gcd(nums[0] , nums[nums.size() - 1]);


        return m ; 
        
    }
};
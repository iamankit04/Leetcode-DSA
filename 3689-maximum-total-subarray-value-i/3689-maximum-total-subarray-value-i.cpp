class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {

        int n = nums.size();

        sort(begin(nums) , end(nums));

        long long s = 0 ; 
        long long a = nums[n-1]; 
        long long b = nums[0];

        while(k != 0){
            s += (a - b);
            k--;
        }
        return s; 
    }
};
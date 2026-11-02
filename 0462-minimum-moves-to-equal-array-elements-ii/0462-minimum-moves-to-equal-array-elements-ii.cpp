class Solution {
public:
    int minMoves2(vector<int>& nums) {

        int n = nums.size();

        sort(begin(nums) , end(nums)); 

        int m = nums[n/2];

        int ans = 0 ; 

        for(int i = 0 ; i < n ; i++){

            ans += abs(nums[i] - m);
        }
        return ans ;
    }
};
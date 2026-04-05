class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {

        int n = nums.size(); 

        if(n <= 2){
            return -1 ; 
        }

        sort(begin(nums) , end(nums)); 
        
        return nums[1];
    }
};
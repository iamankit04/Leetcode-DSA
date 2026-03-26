class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

       

        for(int i =  0;  i< nums.size() ; i++){
            nums[i] = pow(nums[i] , 2);
        }

        sort(begin(nums) , end(nums));

        return nums;
    }
};
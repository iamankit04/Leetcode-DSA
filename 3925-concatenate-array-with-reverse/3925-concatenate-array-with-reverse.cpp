class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {

        vector<int>res(nums.begin() , nums.end());

        int n = nums.size(); 

        for(int i = n - 1;  i >= 0 ; i--){
            res.push_back(nums[i]);
        }

        return res; 
        
    }
};
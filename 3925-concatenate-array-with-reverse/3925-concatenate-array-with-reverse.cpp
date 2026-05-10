class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {

        vector<int>res(nums.begin() , nums.end());

        reverse(begin(nums) , end(nums));

        res.insert( res.end() , nums.begin() , nums.end());

        return res; 
        
    }
};
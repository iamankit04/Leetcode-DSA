class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size(); 
        // vector<int> res ; 

        for(int i = 0 ;  i < n ; i++){
            for(int j = 0 ; j < n; j++){

                if(j != i && nums[j] + nums[i] == target){
                   return {i , j};
                }
            }
        }
        return {-1 , -1} ; 
    }
};
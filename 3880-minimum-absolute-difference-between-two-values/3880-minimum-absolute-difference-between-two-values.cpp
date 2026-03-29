class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        
        int n = nums.size(); 
        int mn = INT_MAX ; 

        for(int i = 0 ; i < n ; i++){
            for(int j = i+1; j < n ; j++){

               if(nums[i] != 0 && nums[j] != 0 && abs(nums[i] - nums[j]) >= 1){
                mn = min(mn , abs(i-j));
               }
            }
        }

        return mn == INT_MAX ? -1 : mn ; 
    }
};
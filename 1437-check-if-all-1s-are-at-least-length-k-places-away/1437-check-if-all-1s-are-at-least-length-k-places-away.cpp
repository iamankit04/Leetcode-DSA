class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {

        int n = nums.size(); 

        vector<int> res; 

        for(int i = 0 ; i < n ; i++){
            if(nums[i] == 1)
            res.push_back(i) ; 
        }

        for(int i =  1 ; i < res.size() ; i++){
          
          if(res[i] - res[i-1] <= k) return false; 

        }
        return true ; 
        
    }
};
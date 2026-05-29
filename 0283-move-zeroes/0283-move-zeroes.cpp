class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        vector<int> res; 
        int c = 0 ; 
        for(auto &it : nums){
            if(it == 0) c++;
            
            if(it != 0)
            res.push_back(it);
        }
        while(c--){
            res.push_back(0);
        }
        for(int i = 0 ;  i < nums.size(); i++){
            nums[i] = res[i];
        }
    }
};
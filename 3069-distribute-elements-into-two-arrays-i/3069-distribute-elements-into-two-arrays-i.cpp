class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        
        int n = nums.size(); 
        vector<int> temp1 , temp2 ;

        temp1.push_back(nums[0]);
        temp2.push_back(nums[1]); 

        for(int i = 2 ; i < n ; i++){
            if(temp1.back() >= temp2.back()){
                temp1.push_back(nums[i]);
            }else{
                temp2.push_back(nums[i]);
            }
        } 

        vector<int> res; 

        for(auto &it : temp1){
            res.push_back(it);
        }
        
        for(auto &it : temp2){
            res.push_back(it);
        }

        return res; 
    }
};
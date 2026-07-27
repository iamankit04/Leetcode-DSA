class Solution {
public:
    int maxProduct(vector<int>& nums) {

        vector<int> res; 

        for(auto &num : nums){
             res.push_back(num - 1); 
        }

        sort(begin(res) , end(res) , greater<int>()); 

        return res[0] * res[1];
        
    }
};
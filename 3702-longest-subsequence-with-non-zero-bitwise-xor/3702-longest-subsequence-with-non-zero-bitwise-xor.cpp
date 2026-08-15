class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        
        int n = nums.size(); 

        int iszero = true; 
        int k = 0  ;

        for(auto &it : nums){
          
           k = k ^ it ; 

           if(it != 0){
             iszero = false ; 
           }

        }

        if(iszero) return 0; 

        return k == 0 ? n - 1 : n; 
    }
};
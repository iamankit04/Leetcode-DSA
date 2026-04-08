class Solution {
public:
    int M = 1e09 + 7 ; 
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {

        for(auto q : queries){

            int l = q[0] ; 
            int r = q[1] ; 
            int k = q[2] ; 
            int v = q[3] ; 

            for(int idx = l ; idx <= r ; idx += k){
                nums[idx] = (1LL * nums[idx] * v) % M;
         
            }
    }

        int ans = 0 ; 

        for(auto &it : nums){
            ans ^= it ; 
        }
        return ans ; 
    }
};
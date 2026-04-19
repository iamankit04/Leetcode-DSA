class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
       int n = nums.size();
        int maxi = INT_MIN ;
        vector<int> pre(n) , suf(n) ;
        int ans = INT_MIN ;
        int ans1 = INT_MAX; 
        for(int i = 0 ; i < n ; i++){
            ans = max(ans , nums[i]);
            pre[i] = ans; 
        } 

        for(int i = n - 1;  i >=0 ; i--){
           ans1 = min(ans1 , nums[i]);
           suf[i] = ans1;
        }

        for(int i = 0 ;  i < n;  i++){

            if(pre[i] - suf[i] <= k){
                return i ; 
            }
        }

        return -1 ;   
    }
};
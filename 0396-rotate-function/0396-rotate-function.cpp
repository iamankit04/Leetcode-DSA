class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {

        // math 
        int n = nums.size();

        int s = accumulate(begin(nums) , end(nums) , 0); 
        int a = 0; 

        for(int i = 0 ; i < n ; i++){
            a += i * nums[i];
        }

        int ans = a ; 
        for(int i = 1 ; i < n ; i++){
            a = a + s - nums[n-i]*n;
            ans= max(ans , a);
        }

        return ans;
        
    }
};
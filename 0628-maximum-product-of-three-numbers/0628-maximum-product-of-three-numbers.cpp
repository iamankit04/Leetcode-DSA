class Solution {
public:
    int maximumProduct(vector<int>& nums) {

        sort(begin(nums) , end(nums) , greater<int>()); 
        int ans = INT_MIN ; 

        int m1 = 0 , m2 = 0 , m3 = 0 ; 
        int n = nums.size(); 
        int k = n - 1 ; 

        m1 = nums[0]; 
        m2 = nums[k--]; 
        m3 = nums[k]; 

        ans = max(ans , m1*m2*m3);

        m2 = nums[1]; 
        m3 = nums[2];

        ans = max(ans , m1*m2*m3);
        
        return ans ; 
    }
};
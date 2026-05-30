class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        // Sliding window approach 

        int zero = 0 , i = 0 , j =  0 , ans = 0 ;  

        int n = nums.size();

        while(j < n){

            if(nums[j] == 0) zero++;

            while(zero > k){

                if(nums[i] == 0) zero--; 

                i++;


            }

            ans = max(ans , j - i + 1);
            j++;
        }
        return ans; 
    }
};
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
       
        // sliding window 

        int n = nums.size(); 
        int i = 0 , j = 0 , wsum = 0 , cnt0 = 0 , res = 0  ; 

        while(j < n){

            wsum += nums[j];

            while(i < j && (nums[i] == 0 || wsum > goal)){

                if(nums[i] == 0){
                    cnt0++;
                }else{
                    cnt0 = 0 ; 
                }

                wsum -= nums[i];
                i++;
            }
            
            if(wsum == goal)
            res += 1 + cnt0; 


            j++;
        }
        return res ; 
    }
};
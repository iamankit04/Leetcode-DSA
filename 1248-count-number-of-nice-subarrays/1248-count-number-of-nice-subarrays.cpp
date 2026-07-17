class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
         int n = nums.size(); 
        for(int i = 0 ; i < n ; i++){
            if(nums[i] % 2 == 0){
                nums[i] = 0 ; 
            }else{
                nums[i] = 1 ; 
            }
        }

        
        int i = 0 , j = 0 , wsum = 0 , cnt0 = 0 , res = 0  ; 

        while(j < n){

            wsum += nums[j];

            while(i < j && (nums[i] == 0 || wsum > k)){

                if(nums[i] == 0){
                    cnt0++;
                }else{
                    cnt0 = 0 ; 
                }

                wsum -= nums[i];
                i++;
            }
            
            if(wsum == k)
            res += 1 + cnt0; 


            j++;
        }
        return res ; 
        
    }
};
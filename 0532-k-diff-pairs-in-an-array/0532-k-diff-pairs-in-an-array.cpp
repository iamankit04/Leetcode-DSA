class Solution {
public:
    int findPairs(vector<int>& nums, int k) {

        // two pointer

        if(k < 0) return 0; 

        sort(begin(nums) , end(nums));

        int n = nums.size(); 

        int i =  0 , j = 1 ; 
        int ans = 0 ; 

        while(i < n && j < n){

           if(i == j || nums[j] - nums[i] < k){
             j++;
           }else if(nums[j] - nums[i] > k){
             i++;
           }else{
              ans++;
              i++;
              j++;
              
              //skiping
              while(i < n && nums[i] == nums[i-1]) i++;
              while(j < n && nums[j] == nums[j-1]) j++;
           }
            
        }
        return ans; 
    }
};
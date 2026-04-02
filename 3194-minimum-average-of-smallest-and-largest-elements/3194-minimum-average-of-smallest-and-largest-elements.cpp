class Solution {
public:
    double minimumAverage(vector<int>& nums) {

        int n = nums.size(); 

        sort(begin(nums) , end(nums));

        double avgg= 0 ;
        double ans= 1e09 ;  
        
        int i = 0 , j = n -1 ; 

        while(i < j){
            avgg = (nums[i] + nums[j])/2.0;
            ans = min(ans , avgg);
            i++;
            j--; 
        }
        return ans ; 
        
    }
};
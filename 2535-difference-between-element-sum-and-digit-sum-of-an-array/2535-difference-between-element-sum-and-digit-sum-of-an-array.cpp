class Solution {
public:
    int differenceOfSum(vector<int>& nums) {

        int n=  nums.size(); 
        int x = accumulate(nums.begin(), nums.end() , 0); 

        int y = 0 ;  

        for(int i = 0 ; i < n ; i++){

            while(nums[i] > 0){
                int d = nums[i] % 10; 
                y += d ; 
                nums[i] /= 10 ; 
            }
        }
        return abs(x - y); 
    }
};
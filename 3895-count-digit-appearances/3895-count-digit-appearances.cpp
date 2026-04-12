class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {

        int n = nums.size(); 
        int cnt = 0 ; 

        for(int i = 0 ; i < n ; i++){
            int n1 = nums[i]; 

            while(n1 > 0){
                int d = n1 % 10 ; 
                if(d == digit) cnt++; 
                n1 /= 10 ; 
            }
        }

        return cnt ; 
        
    }
};
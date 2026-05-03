class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {

        int n = nums.size(); 

        vector<int>res(n , 0) ; 

        for(int i = 0 ; i < n;  i++){

           bool flag = false ; 
            
            if(nums[i] % 2 == 0) flag = true ; 

            if(flag){

                for(int j = i + 1 ; j < n;  j++){
                    if(nums[j] % 2 != 0){
                        res[i]++;
                    }
                }
            }else{

                
                for(int j = i + 1 ; j < n;  j++){
                    if(nums[j] % 2 == 0){
                        res[i]++;
                    }
                }

            }
        }

        return res; 
        
    }
};
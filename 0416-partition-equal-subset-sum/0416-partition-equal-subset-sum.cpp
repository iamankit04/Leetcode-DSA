class Solution {
public:
    int n ;

    int sum ;

    int t[201][10001];
     
    bool issubsum(vector<int>& nums , int i , int s){

        if( s == sum ) return true ; 

        if(i == n) return false ; 

        if(t[i][s] != -1) return t[i][s]; 

        if(s + nums[i] > sum){
            return t[i][s] =  issubsum(nums , i+1 , s); 
        }

        return t[i][s] =  issubsum(nums , i+1,  s) || issubsum(nums , i+1, s + nums[i]); 
    }
    bool canPartition(vector<int>& nums) {

        n = nums.size(); 

        memset(t , -1 , sizeof(t));

        sum = accumulate(begin(nums) , end(nums) , 0); 

        if(sum % 2 != 0) return false ; 

        sum /= 2 ; 

        return issubsum(nums , 0 ,  0); 
        
    }
};
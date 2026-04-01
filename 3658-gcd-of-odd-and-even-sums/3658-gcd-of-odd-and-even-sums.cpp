class Solution {
public:
    int gcdOfOddEvenSums(int n) {

        int se = 0 , so = 0 ; 

        for(int i = 1 ; i <= n*2; i++){
            if(i % 2 == 0){
                se += i ; 
            }else{
                so += i ; 
            }
        }
   
        return __gcd(so, se) ; 
    }
};
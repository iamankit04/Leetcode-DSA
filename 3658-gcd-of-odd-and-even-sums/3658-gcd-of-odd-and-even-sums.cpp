class Solution {
public:
    int gcdOfOddEvenSums(int n) {

        int se = 0 , so = 0 ; 

        int k = n ; 
        int j = 1 ; 
        while(k--){
            so += j ; 
            j += 2 ; 
        }
        int i = 2 ; 
        while(n--){
            se += i ; 
            i += 2 ;
        }
        return __gcd(se , so); 
    }
};
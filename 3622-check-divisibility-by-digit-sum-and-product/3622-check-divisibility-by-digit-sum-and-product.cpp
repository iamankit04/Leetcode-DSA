class Solution {
public:
    bool checkDivisibility(int n) {

        int t1 = n , t2  = n ; 

        int sum = 0 ; 
        int p = 1 ; 

        while(t1 > 0){
           int d = t1 % 10 ; 
           sum += d ; 
           p *= d ; 
           t1 /= 10 ; 
        }
        int k = sum + p ; 
        if(n % k == 0) return true ; 

        return false ; 
    }
};
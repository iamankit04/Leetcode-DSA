class Solution {
public:
    int reverse(int num){

        int rev = 0 ; 

        while(num > 0){
            int d = num % 10; 
            rev = rev*10 + d; 
            num /= 10; 
        }
        return rev ; 
    }
    int mirrorDistance(int n) {

      return abs(n-reverse(n));
    }
};
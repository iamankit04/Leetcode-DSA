class Solution {
public:
    int addDigits(int num) {

        if(num < 10) return num ; 

        int ad = 0 ; 

        while(num != 0){
            int d = num % 10 ; 
            ad += d ; 
            num /= 10; 
        }

        return addDigits(ad);
        
    }
};
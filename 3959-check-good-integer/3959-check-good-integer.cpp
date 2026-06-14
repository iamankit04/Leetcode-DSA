class Solution {
public:
    bool checkGoodInteger(int n) {

      
        int sum = 0 , ssum = 0 ; 
        
        while(n != 0){

            int d = n % 10 ; 
            
            sum += d ; 
            ssum = ssum + pow(d , 2);

            n /= 10; 
            
        }

        return ssum - sum >= 50; 
        
    }
};
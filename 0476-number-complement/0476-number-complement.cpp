class Solution {
public:
    int findComplement(int num) {

        if(num == 0) return 1 ; 

        if(num == 1) return 0 ; 

        int a = 1 ;
        int temp = num ; 

        while(temp > 1){

            temp /= 2 ; 
            a++;
        }

        int b = pow(2 , a) - 1 ; 

        return b ^ num ; 
        
    }
};
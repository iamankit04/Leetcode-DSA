class Solution {
public:
    int smallestNumber(int n, int t) {

        int ans = -1  ; 

        for(int i = n ; i <= 100 ; i++){
            int temp = i ; 
            int p = 1 ; 

            while(temp > 0){
                int d = temp % 10 ; 
                p *= d ;
                temp /= 10;  
            }

            if(p % t == 0){
                ans = i; 
                break ;  
            }
        }
        return ans ; 
    }
};
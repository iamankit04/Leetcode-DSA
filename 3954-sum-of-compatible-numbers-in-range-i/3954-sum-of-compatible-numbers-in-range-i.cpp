class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        
        int s = 0 ; 

        int start = max(1 , n - k); 

        for(int i = start ; i <= n + k ; i++){

            if(abs(n- i) <= k && (n & i) == 0){
                s += i ; 
            }
        }

        return s; 
    }
};
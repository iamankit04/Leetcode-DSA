class Solution {
public:
    int bitwiseComplement(int n) {
        int m = n ; 
        int m1 = 0 ; 
        
        if(n == 0) return 1 ; 
        if(n == 1) return 0 ; 

        while(m != 0){

            m1 = (m1 << 1) | 1 ; 
            m = m >> 1 ; 
            
        }

        int ans = (~n) & m1 ; 

        return ans  ; 
    }
};
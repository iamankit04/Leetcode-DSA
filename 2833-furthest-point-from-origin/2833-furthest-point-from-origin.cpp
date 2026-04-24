class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {

        int c1 = 0 , c2 = 0 ; 
        int n = moves.length(); 
        for(auto &ch : moves){
            if(ch == 'L'){
                c1++;
            }else if(ch == 'R'){
                c2++; 
            }
        }

        // return  n ; 

        int r = n - (c1 + c2);

        if(c1 >= c2){
            
            return r + c1 - c2   ; 
        }

        return r + c2 - c1 ; 
        
    }
};
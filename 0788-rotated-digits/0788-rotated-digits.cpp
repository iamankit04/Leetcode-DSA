class Solution {
public:
    int rotatedDigits(int n) {

       
        int cnt = 0 ;  

        for(int i = 1 ;i <=n ; i++){

            int che = i ; 

            bool flag = true , change = false ;

            while(che > 0 && flag){

                int d = che % 10 ; 

                if(d == 2 || d == 5 || d == 6 || d == 9){
                    change = true ; 
                }else if(d == 3 || d == 4 || d == 7){
                    flag = false ; 
                }

                che /= 10 ; 
            }

            if(flag && change) cnt++;
        
            


        }

        return cnt ; 
        
    }
};
class Solution {
public:
    string maximumOddBinaryNumber(string s) {

        int n1 = 0 , n2 = 0 ; 
        string ans = ""; 

        for(auto &a : s){
            if(a == '0'){
                n1++;
            }else{
                n2++;
            }
        }

        while(n2 > 1){
            ans += '1';
            n2--;
        }

        while(n1 > 0){
            ans += '0'; 
            n1--;
        }

        ans += '1'; 

        return ans ; 
        
    }
};
class Solution {
public:
    int largestInteger(int n, int s) {

        int temp = s ; 

        int c = temp / 9 ; 
        int k = temp % 9; 

        if(c > n) return -1; 
        if((c==n) && (k > 0)) return -1;  

        string s1 = ""; 
        while(n--){
            if(s >= 9){
                s1 += '9'; 
                s -= 9; 
            }else if(s < 9 && s >= 0){
                s1 += char(s + '0');
                s = 0 ; 
            }
        }

       int  ans = stoi(s1); 

        return ans ; 
    }
};
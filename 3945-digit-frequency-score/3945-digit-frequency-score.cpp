class Solution {
public:
    int digitFrequencyScore(int n) {

        int num = n ; 

        vector<int>dig(10 , 0); 

        while(n > 0){
            int d = n % 10 ; 
            dig[d]++;
            n /= 10; 
        }

        int sum = 0 ; 

        // while(num > 0){

        //     int d = num % 10 ; 
        //     sum = sum + (d * dig[d+1]);
        //     num /= 10; 
        // }

        for(int i = 0 ; i < dig.size(); i++){

            sum = sum + (i * dig[i]);
        }

        

        return sum ; 
        
    }
};
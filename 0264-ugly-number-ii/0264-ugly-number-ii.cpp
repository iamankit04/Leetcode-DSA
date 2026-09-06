class Solution {
public:
    int nthUglyNumber(int n) {

        vector<int> temp(n+1, 0); 
        temp[1] = 1 ; 

        int t1 = 1 , t2 = 1 , t3 = 1 ; 

        for(int i = 2 ; i <= n ; i++){

            int e1 = temp[t1] * 2 ;
            int e2 = temp[t2] * 3 ; 
            int e3 = temp[t3] * 5 ; 

            int mn = min({e1 , e2 , e3}); 

            temp[i] = mn ; 

            if(mn == e1) t1++;
            if(mn == e2) t2++;
            if(mn == e3) t3++;
        }
        return temp[n];
    }
};
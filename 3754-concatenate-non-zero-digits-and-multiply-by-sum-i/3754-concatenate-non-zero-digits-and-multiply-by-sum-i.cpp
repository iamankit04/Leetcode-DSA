class Solution {
public:
    long long sumAndMultiply(int n) {

        stack<long long> st ; 

        while(n > 0){
            long long d = n % 10 ; 

            if(d != 0) st.push(d); 

            n /= 10 ; 
        }

       long long  ans = 0 ; 
        long long sum = 0 ; 

        while(!st.empty()){
            long long a = st.top(); 
            st.pop(); 

            ans = ans * 10 + a ;
            sum += a ;  
        }
        return ans * sum ; 
    }
};
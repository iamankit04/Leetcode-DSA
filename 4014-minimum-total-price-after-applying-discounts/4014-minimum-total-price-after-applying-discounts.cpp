class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {

        sort(begin(prices) , end(prices) , greater<int>());
        sort(begin(discounts) , end(discounts) , greater<int>()); 

        double ans = 0.0 ; 
        int i = 0 ; 

        int k = min(prices.size(), discounts.size());

        for( ;  i < k; i++){

             ans += (double)(prices[i] * (100.0 - discounts[i])/100.0);
        }
        
        int n = prices.size(); 
        if(i < n){

            for(int j = i; j < n ; j++){
                ans += (double)prices[j]; 
            }
        }

       return ans; 
    }
};
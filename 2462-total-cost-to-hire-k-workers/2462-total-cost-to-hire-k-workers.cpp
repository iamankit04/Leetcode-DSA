class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {

        // HEAP 

        int n = costs.size(); 

        priority_queue<int , vector<int>, greater<int>> pq1 , pq2 ; 

        int i = 0 ; 
        int j = n - 1; 

        int h = 0 ;
        long long  ans = 0 ; 

        while(h < k){

            while(pq1.size() < candidates && i <= j){
                pq1.push(costs[i++]);
            }

            while(pq2.size() < candidates && j >= i){
                pq2.push(costs[j--]);
            }

            int minpq1 = pq1.size() > 0 ? pq1.top() : INT_MAX; 
            int minpq2 = pq2.size() > 0 ? pq2.top() : INT_MAX; 

            if(minpq1 <= minpq2){
                ans += minpq1 ;
                pq1.pop();
            }else{
                ans += minpq2 ; 
                pq2.pop();
            }

            h++;
        }

        return ans ; 
        
    }
};
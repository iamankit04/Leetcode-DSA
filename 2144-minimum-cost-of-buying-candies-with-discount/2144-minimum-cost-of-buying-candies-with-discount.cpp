class Solution {
public:
    int minimumCost(vector<int>& cost) {

        int n = cost.size(); 

        sort(begin(cost) , end(cost) , greater<int>()); 

        int ans =  0 ; 

        for(int i = 0 ; i < n ; i += 3){

            int a = cost[i];
            int b = i+1 != n ? cost[i+1] : 0;

            ans = ans + a + b ; 
        }

        return ans ; 
        
    }
};
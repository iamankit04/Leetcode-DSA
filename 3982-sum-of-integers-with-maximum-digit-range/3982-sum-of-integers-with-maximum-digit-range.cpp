class Solution {
public:
    int maxDigitRange(vector<int>& nums) {

        priority_queue<pair<int , int >> pq ; 

        for(auto &num : nums){

            int x = num; 
            int k = 0 ; 

             int mi = INT_MAX; 
             int mx = INT_MIN ;

            while(x > 0){
               

                int d = x % 10 ; 
                mi = min(mi , d); 
                mx = max(mx , d); 
                
                x /= 10; 
            }

            k = mx - mi; 
            mi= INT_MAX ;
            mx = INT_MIN; 

            pq.push({ k , num});
            k = 0 ; 
        }
        int sum = 0 ; 
        int a = pq.top().first ; 
        int b = pq.top().second ; 
        sum += b ; 
        pq.pop(); 

        while(!pq.empty() && pq.top().first == a){
            auto curr = pq.top(); 
            pq.pop(); 

            sum += curr.second ; 
        }
        return sum ; 
    }
};
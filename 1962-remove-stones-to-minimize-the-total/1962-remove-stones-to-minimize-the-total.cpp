class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {

        // HEAP 

        priority_queue<int> pq ; 

        for(auto &it : piles){
            pq.push(it) ; 
        }

        while(k--){
            auto curr = pq.top(); 
            pq.pop();
            int a = curr - curr / 2 ;  
            pq.push(a) ; 
        }

        int ans = 0; 

        while(!pq.empty()){
            ans += pq.top(); 
            pq.pop();
        }
        return ans; 
    }
};
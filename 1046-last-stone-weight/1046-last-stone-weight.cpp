class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

        int n = stones.size(); 

        if(n == 0) return 0 ; 
        if(n == 1) return stones[0]; 

        priority_queue<int> pq ; 

        for(auto &a: stones){
            pq.push(a) ; 
        }

        while(!pq.empty()){

            int n1 = pq.top(); pq.pop(); 
            int n2 = pq.top(); pq.pop(); 

            if(n1 != n2){
                pq.push(n1 - n2) ; 
            }

            if(pq.size() == 1){
                int s =  pq.top() ; pq.pop(); 
                return s ; 
            }

            
        }
        return 0; 
    }
};
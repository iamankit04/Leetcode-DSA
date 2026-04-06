class Solution {
public:
    typedef pair<int ,int> p; 
    bool carPooling(vector<vector<int>>& trips, int capacity) {

        // HEAP  

        int n = trips.size(); 

        priority_queue<p , vector<p> , greater<p>> pq ; 

        for(int i = 0 ;  i < n; i++){
            pq.push({trips[i][1] , trips[i][0]}); 
            pq.push({trips[i][2] , - trips[i][0]});
        }
        int sum = 0; 
        while(!pq.empty()){

            sum += pq.top().second; 
            pq.pop(); 

            if(sum > capacity) return false ; 

        }

        return true; 
        
    }
};
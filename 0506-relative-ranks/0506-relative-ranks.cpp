class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {

        int n = score.size(); 

        vector<string> res(n , "") ; 

        priority_queue<pair<int , int >> pq ; 

        for(int i =  0;  i < n ; i++){
            pq.push({score[i] , i});
        }

        int rank = 1 ;
        
        if(!pq.empty()){
        auto p = pq.top();
        pq.pop(); 

        int i1 = p.second ; 
        res[i1] = "Gold Medal"; 
        rank++;
        }
        
         
        if(!pq.empty()){
        auto p2 = pq.top();
        pq.pop(); 
        

        int i2 = p2.second ; 
        res[i2] = "Silver Medal"; 
        rank++;
        }
        
         
        if(!pq.empty()){
        auto p1 = pq.top();
        pq.pop(); 

        int i3 = p1.second ; 
        res[i3] = "Bronze Medal"; 
        rank++;
        }

        while(!pq.empty()){

            auto curr = pq.top(); 
            pq.pop();
            int i_ = curr.second ; 
            res[i_] = to_string(rank);
            rank++;
        }
        
        return res; 
    }
};
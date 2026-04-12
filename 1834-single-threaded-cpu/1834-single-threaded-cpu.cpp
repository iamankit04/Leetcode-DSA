class Solution {
public:
    typedef pair<int , int > p ; 
    vector<int> getOrder(vector<vector<int>>& tasks) {

        // heap 

        int n = tasks.size(); 

        for(int i = 0 ; i < n ; i++){
            tasks[i].push_back(i); 
        }

        sort(begin(tasks) , end(tasks)); 

        priority_queue<p , vector<p> , greater<p>> pq ; 
        vector<int>res;  

        long long currtime = 0 ; 
        int idx = 0 ; 

        while(idx < n || !pq.empty()){

            if(pq.empty() && currtime < tasks[idx][0] ){
                currtime = tasks[idx][0];

            }

            while(idx < n && tasks[idx][0] <= currtime){
                pq.push({tasks[idx][1] , tasks[idx][2]});
                idx++;
            }

            auto curr = pq.top(); 
            pq.pop(); 

            currtime += curr.first; 
            res.push_back(curr.second) ; 
        }

        return res; 
        
    }
};
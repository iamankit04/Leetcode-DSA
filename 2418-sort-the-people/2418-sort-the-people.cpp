class Solution {
public:
    typedef pair<int , string> p ; 
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {

        vector<string> ans ; 
        // pair<int , string> p ; 
        priority_queue<p> pq ; 

        for(int i  =0 ; i < heights.size(); i++){
            pq.push({heights[i] , names[i]});
        }
        
        while(!pq.empty()){
            auto curr = pq.top(); 
            pq.pop(); 

            ans.push_back(curr.second);
        }

        return ans ; 
    }
};
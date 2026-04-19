class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size(); 

        unordered_map<int , unordered_set<int>> adj ; 

        for(auto vec : edges){
            int u = vec[0]; 
            int v = vec[1]; 
            adj[u].insert(v); 
            adj[v].insert(u); 
        }

        for(auto &it : adj){
            if(it.second.size() == n){
                return it.first ; 
            }
        }
      return -1 ; 

        
    }
};
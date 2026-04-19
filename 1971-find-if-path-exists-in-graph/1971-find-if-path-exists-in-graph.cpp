class Solution {
public:
    bool dfs(unordered_map<int ,vector<int>>& adj , int src , int dest , vector<bool> &vis){
     
      if(src == dest) return true;

      vis[src] = true ;  
      
      for(auto &v : adj[src]){
          if(!vis[v]){
            if(dfs(adj , v , dest ,vis)){
              return true ; 
            }
          }
      }

    return false ; 
        
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
       if(source == destination) return true; 

        unordered_map<int ,vector<int>> adj ; 
        vector<bool> vis(n); 

        for(auto vec : edges){
            int u = vec[0]; 
            int v = vec[1]; 
            adj[u].push_back(v); 
            adj[v].push_back(u); 
        }

        

       return  dfs(adj , source , destination , vis);
    }
};
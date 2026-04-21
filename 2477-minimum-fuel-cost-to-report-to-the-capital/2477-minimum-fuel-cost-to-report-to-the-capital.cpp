class Solution {
public:
 
    long long ans ; 
    long long  dfs(unordered_map<int , vector<int>> &adj , int u ,  int seats , vector<bool> &vis ){
       
       vis[u] = true ; 
       long long cnt = 1 ; 
       for(auto &v : adj[u]){
          if(!vis[v]){
             cnt += (dfs(adj , v , seats , vis)) ; 
          }
       }

       long long x = cnt / seats ; 

       if(cnt % seats != 0) x++; 

       if(u != 0){
          ans += x; 
       } 

       return cnt ; 
    }
    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {

        // DFS 

        int n = roads.size();

        if(roads.size() == 0)
            return 0; 

        unordered_map<int , vector<int>> adj ; 
        for(auto &vec : roads){
            int u = vec[0]; 
            int v = vec[1]; 
            adj[u].push_back(v); 
            adj[v].push_back(u); 
        }

        vector<bool> vis(n+1 , false) ; 

        dfs(adj ,0 ,  seats , vis);

        return ans ; 
        
    }
};
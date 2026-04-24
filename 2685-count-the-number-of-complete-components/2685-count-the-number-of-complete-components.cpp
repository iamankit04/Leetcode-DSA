class Solution {
public:
    void dfs(unordered_map<int , vector<int>>& adj, vector<bool>&vis , int & deg , int & m , int u){
        vis[u] = true ; 
        m++;
        deg += adj[u].size(); 

        for(auto v : adj[u]){
            if(!vis[v]){
                dfs(adj , vis , deg , m , v) ; 
            }
        }

    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {

        unordered_map<int , vector<int>> adj; 
        int cnt = 0 ; 

        for(auto &vec : edges){
            int u = vec[0]; 
            int v = vec[1] ; 
            adj[u].push_back(v); 
            adj[v].push_back(u); 
        }

        vector<bool> vis(n , false) ; 

        for(int i = 0 ; i < n ; i++){
            if(!vis[i]){
                int m = 0, deg = 0 ; 
                dfs(adj , vis , deg , m , i); 

                if((deg/2) == (m*(m-1))/2) cnt++;
            }
        }

        return cnt ; 
        
    }
};
class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {

        //bfs

        unordered_map<int, vector<pair<int ,int>>> adj ; 

        for(auto &vec:roads){
            int u = vec[0];
            int v = vec[1]; 
            int d = vec[2];

            adj[u].push_back({v , d});
            adj[v].push_back({u , d});

        }

        queue<int> q ; 
        q.push(1); 
        vector<bool> vis(n + 1 , false); 
        vis[1] = true ; 
        int ans = INT_MAX ; 

        while(!q.empty()){
            int u = q.front(); 
            q.pop(); 

            // int x = curr.first ; 
            // int dist = curr.second; 

            for(auto &v : adj[u]){

                ans = min(ans , v.second);

                if(!vis[v.first]){
                    vis[v.first] = true ; 
                    q.push(v.first);
                }
            }
        }
        return ans ; 
    }
};
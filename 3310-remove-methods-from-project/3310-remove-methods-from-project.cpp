class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        //BFS
        unordered_map<int , vector<int>> adj; 
        vector<bool> vis(n , false); 
        vector<int> indegree(n , 0); 

        for(auto &vec : invocations){
            int u = vec[0];
            int v = vec[1]; 
            adj[u].push_back(v); 
            indegree[v]++; 
        }

        queue<int> q ; 
        vis[k] = true ; 
        // indegree[k]--;
        q.push(k); 

        while(!q.empty()){

            int u = q.front(); 

            q.pop(); 

            for(auto &v : adj[u]){
                 indegree[v]--;
                if(!vis[v]){
                   
                    vis[v] = true ; 
                    q.push(v); 
                }
            }
        }

        vector<int> res ; 
        bool flag = false ; 

        for(int i = 0 ; i  < n ; i++){

            if(vis[i] && indegree[i] > 0){
                flag = true; 
                break ; 
            }
            
            if(!vis[i]){
                res.push_back(i);
            }
        }

        if(flag){
            vector<int> temp ; 

            for(int i =  0 ; i <  n ; i++){
                 temp.push_back(i);
            }

            return temp; 
        }
        return res; 
    }
};
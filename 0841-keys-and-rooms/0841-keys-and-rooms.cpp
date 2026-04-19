class Solution {
public:
    void dfs(unordered_map<int , vector<int >>& adj , vector<bool>&vis , int u ){
        vis[u] = true ; 

        for(auto &v : adj[u]){
            if(!vis[v]){
                dfs(adj , vis , v) ; 
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {

        int n = rooms.size(); 
        if(rooms[0].empty()) return false ; 

        unordered_map<int , vector<int >> adj ; 

        for(int i = 0 ; i < n;  i++){
            if(!rooms[i].empty()){
            for(int j = 0 ; j < rooms[i].size(); j++){
                adj[i].push_back(rooms[i][j]);
            }
        }
        }

        vector<bool> vis(n, false); 

        dfs(adj , vis , 0); 

        for(auto it : vis){
            if(it == false){
                return false ; 
            }
        }

        return true; 
        
    }
};
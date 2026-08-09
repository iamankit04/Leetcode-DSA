class Solution {
public:
    long long weightedSum(vector<int>& parent, vector<int>& nums) {

        //  BFS
        
        int n = parent.size();
        unordered_map<int , vector<int>> adj ; 

        for(int i = 1 ; i < n ; i++){
            adj[parent[i]].push_back(i);
        }

        vector<int> depth(n , 0); 
        depth[0] = 1 ; 
        int h = 1 ; 

        queue<int> q ; 
        q.push(0);

        while(!q.empty()){

            int curr = q.front(); 
            q.pop(); 

            h = max(h , depth[curr]); 

            for(auto &c : adj[curr]){
                depth[c] = depth[curr] + 1 ; 
                q.push(c); 
            }
        }

        long long ans = 0 ; 

        for(int i = 0 ;  i < n ; i++){

            ans += (long long)nums[i] * (h - depth[i] + 1); 
        }

        return ans ; 
    }
};
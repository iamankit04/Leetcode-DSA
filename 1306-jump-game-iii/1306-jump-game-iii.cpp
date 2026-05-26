class Solution {
public:
    bool canReach(vector<int>& arr, int start) {

        int n = arr.size(); 
        
        queue<int> q ; 
        vector<bool> vis(n , false);
        q.push(start); 

        while(!q.empty()){
            auto curr = q.front(); 
            q.pop();

            if(arr[curr] == 0){
                return true ; 
            }

            if(curr - arr[curr] >= 0 &&  !vis[curr - arr[curr]]){
                vis[curr - arr[curr]];
                q.push(curr - arr[curr]);
            }

            if(curr + arr[curr] < n && !vis[curr + arr[curr]]){
                vis[curr + arr[curr]] = true ; 
                q.push(curr + arr[curr]);
            }


        }

        return false;  
    }
};
class Solution {
public:
    int n ; 
    vector<int> res; 
    int ans = INT_MAX; 
    void solve(vector<int>& nums , vector<bool>& vis , vector<int>& perm , int score){

        if(score >= ans) return ; 

        if(perm.size() == n){
            score += abs(perm.back() - nums[perm[0]]);

            if(ans > score){
                ans = score ; 
                res = perm ; 
            }
        }

        for(int i = 1 ; i < n ; i++){
            if(!vis[i]){
            perm.push_back(i);
            vis[i] = true ;  

            int s = perm.size(); 

            solve(nums , vis , perm , score + abs(perm[s-2] - nums[perm[s-1]])); 

            perm.pop_back(); 
            vis[i] = false ; 

            }
        }
    }
    vector<int> findPermutation(vector<int>& nums) {
       
        //Backtracking

        n = nums.size(); 
        vector<bool> vis(n , false); 
        vector<int> perm = {0}; 
        vis[0] = true; 

        solve(nums , vis , perm , 0); 

        return res; 
    }
};
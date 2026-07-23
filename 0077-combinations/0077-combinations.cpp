class Solution {
public:
    vector<vector<int>> res; 
    void solve(int &n , int k , int start , vector<int>&temp){

        if(k == 0){
            res.push_back(temp); 
            return; 
        }

        if(start > n) return ; 
        
        //take
        temp.push_back(start); 
        solve(n , k - 1 , start + 1, temp); 
        temp.pop_back(); 
        
        // skip
        solve(n , k , start + 1 , temp); 
    }
    vector<vector<int>> combine(int n, int k) {

        // Backtracking

        vector<int> temp;

        solve(n, k , 1 , temp); 

        return res ;  

        
    }
};
class Solution {
public:
    int res = INT_MAX ;
    int n ;
    void solve(vector<int>& cookies , int idx , int k , vector<int>&curr){

        if(idx == n){
            int mx = *max_element(begin(curr) , end(curr)); 
            res = min(res , mx); 
            return ; 
        }

        int temp = cookies[idx]; 

        for(int i = 0 ; i < k ; i++){
             curr[i] += temp; 
             solve(cookies , idx + 1 , k , curr); 
             curr[i] -= temp; 
        }
    }
    int distributeCookies(vector<int>& cookies, int k) {
      // BACKTRACKING 

      
      n = cookies.size(); 
      
      vector<int>curr(k); 
      solve(cookies, 0 , k , curr);

      return res ; 

        
    }
};
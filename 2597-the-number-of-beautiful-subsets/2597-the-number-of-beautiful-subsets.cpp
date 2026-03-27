class Solution {
public:
    int n , result  , s ; 
    void solve(int idx ,vector<int>& nums, unordered_map<int , int >&mp){

        // base case 
        if(idx >= n){
            result++; 
            return ; 
        }

        solve(idx + 1 , nums , mp); 

        if(!mp[nums[idx] - s] && !mp[nums[idx] + s]){
            mp[nums[idx]]++; 
            solve(idx + 1 , nums , mp) ; 
            mp[nums[idx]]--; 
        }
    }
    int beautifulSubsets(vector<int>& nums, int k) {

        n = nums.size(); 
        result = 0 ;  
        s = k  ;

        unordered_map<int , int > mp ; 

        solve( 0 , nums , mp); 

        return result-1 ; // empty set remove kr renge isse  
        
    }
};
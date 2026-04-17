class Solution {
public:
    int reverse(int s){

        int rev = 0 ; 

        while(s > 0){
            int d = s % 10 ; 
            rev = rev * 10 + d ; 
            s /= 10 ; 
        }

        return rev ; 
    }
    int minMirrorPairDistance(vector<int>& nums) {

        int ans = INT_MAX ; 
        int n = nums.size(); 

        unordered_map<int , int > mp ; 

        for(int i = 0; i < n ; i++){

            if(mp.count(nums[i])){
                ans = min(ans , i - mp[nums[i]]);
            }

            mp[reverse(nums[i])] = i ; 
        }

        return ans == INT_MAX ? -1 : ans ; 
        
    }
};
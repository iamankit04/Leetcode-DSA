class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {

        int n = nums.size(); 
        int cnt = 0 ; 

        unordered_map<int , int > mp; 

        for(auto &it : nums){
            mp[it]++;
        }

    

        for(auto &it : mp){
            int x = it.first; 
            int y= it.second ; 

            int r = 0 ; 
            int l = 0 ; 

            for(int i = 0 ; i < n ; i++){
                if(nums[i] == x){
                    r = i ; 
                    break ; 
                }
            }

            for(int k = r ; k < n ; k++){
               if(nums[k] == x) l = k ; 
            }

            if(l-r + 1 == y){
                cnt++;
            } 
        }
        return cnt ; 
    }
};
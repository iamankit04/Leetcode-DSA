class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int z = nums.size(); 
        int n = nums[0];
        int n1 = nums[z - 1]; 

        // sort(begin(nums) , end(nums) , greater<int>()); 

        unordered_map<int , int > mp ; 

        for(auto &it : nums){
            mp[it]++;
        }

        if(k == 1){

            int ans = -1 ; 

            for(int i = 0 ; i < z ; i++){
                if(mp[nums[i]] == 1){
                    ans = max(ans , nums[i]);
                }
            }
            return ans ;
        } else if(k == z){ return *max_element(nums.begin(), nums.end()); 
        }else  if(k > 1 && k < z){

        unordered_set<int> st ; 

        for(int i = 1 ; i < z - 1 ; i++){
            st.insert(nums[i]);
        }
           
         
         if(!st.count(n1) && mp[n1] == 1 && !st.count(n) && mp[n] == 1) return max(n1 , n);

        if( !st.count(n1) && mp[n1] == 1) return n1 ; 

        if( !st.count(n) && mp[n] == 1) return n ; 

        }

        return -1 ; 
        
    }
};
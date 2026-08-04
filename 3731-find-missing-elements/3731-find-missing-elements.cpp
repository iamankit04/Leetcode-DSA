class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        vector<int> ans; 

        int k = *min_element(begin(nums) , end(nums)); 
        int k1 = *max_element(begin(nums) , end(nums)); 

        unordered_set<int> st ; 

        for(auto &it : nums){
            st.insert(it); 
        }

        int n = nums.size(); 
        
        for(int i =  k ; i <= k1 ; i++){
             
             if(!st.count(i)){
                ans.push_back(i);
             }
        }
        return ans; 
    }
};
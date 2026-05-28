class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st ; 
        vector<int> res; 

        for(auto &it : nums){
            st.insert(it);
        }

        for(int i = 1;  i<= n; i++){
            if(!st.count(i)){
                res.push_back(i);
            }
        }
         return res;         
    }
};
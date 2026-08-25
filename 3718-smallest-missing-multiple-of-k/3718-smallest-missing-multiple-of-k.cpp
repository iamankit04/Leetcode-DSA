class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {

        unordered_set<int> st ; 

        for(auto &it : nums){
            st.insert(it);
        }

        int i = 1 ; 

        while(true){
            if(!st.count(i*k)) {
                return i*k ;
            }
            i++; 
        }
        return -1 ; 
    }
};
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {

        vector<int> res ; 
        stack<int> st ; 

        for(auto &it : nums){
            while(it > 0){
                int d = it % 10 ; 
                st.push(d);
                it /= 10; 
            }

            while(!st.empty()){
                res.push_back(st.top());
                st.pop();
            }
        }
        return res; 
        
    }
};
class Solution {
public:
    int minimumPushes(string word) {

        unordered_set<char> st ; 

        for(auto &it : word) st.insert(it); 

        int n = st.size(); 

        int k = n / 8 ; 
        int k1 = n % 8 ; 

        int i = 1 ; 

        int ans = 0; 

        while(k--){

            ans += (8 * i);
            i++;
        }

        ans += (k1 * i);

        return ans; 
        
    }
};
class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int>v(26 , 0);

        for(auto &it: s){
            v[it -'a']++;
        }

        int c = v[s[0] - 'a'];

        for(auto &it : v){
            if(it != c && it != 0){
                return false;
            }
        }

        return true;
    }
};
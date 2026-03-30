class Solution {
public:
    int findPermutationDifference(string s, string t) {

        unordered_map<char ,int > mp ;
        int sum = 0 ;  

        for(int i = 0 ;  i < t.length(); i++){
            mp[t[i]] = i ; 
        } 

        for(int i = 0 ;  i < s.length(); i++){
            int z = abs(i - mp[s[i]]); 
            sum += z ; 
        }
        return sum ; 
    }
};
class Solution {
public:
    bool checkIfPangram(string sentence) {

        vector<int> freq(26 , 0);

        for(auto &s: sentence){
            freq[s - 'a']++;
        }

        for(auto &a : freq){
            if(a == 0) return false; 
        }
        return true; 
    }
};
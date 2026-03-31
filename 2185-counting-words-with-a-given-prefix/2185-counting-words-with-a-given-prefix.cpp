class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {

        int a = pref.size(); 
        int cnt = 0 ; 

        for(int i = 0 ; i < words.size(); i++){

            if(pref == words[i].substr(0, a)){
                cnt++;
            }
        }
        return cnt; 
        
    }
};
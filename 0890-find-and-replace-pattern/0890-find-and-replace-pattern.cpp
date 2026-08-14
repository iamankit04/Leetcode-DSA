class Solution {
public:
    vector<int> foundpat(string pat){

        int n = pat.length(); 

        if(n == 0) return {} ; 

        vector<int> v ; 

        unordered_map<char , int> mp ; 
        int idx = 0 ; 

        for(int i = 0 ; i < n ; i++){

            if(!mp.count(pat[i])){
                mp.insert({pat[i] , idx++}); 
            }
            
            v.push_back(mp[pat[i]]);

        }

        return v ; 
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {

        int n = words.size(); 

        vector<int> p = foundpat(pattern);  

        vector<string> res;

        for(int i = 0 ; i < n ; i++){

            vector<int> temp = foundpat(words[i]); 

            if(temp == p){
                res.push_back(words[i]);
            }
        } 
        return res; 
    }
};
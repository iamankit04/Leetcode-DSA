class Solution {
public:
    vector<string> commonChars(vector<string>& words) {

        int n = words.size();

        unordered_map<char , int > mp ; 

        for(auto &it : words[0]){
            mp[it]++;
        }

        for(int i = 1 ; i < n ; i++){
             unordered_map<char , int> temp ;

             for(auto &it : words[i]){
                 
                 if(mp.count(it)){
                     mp[it]--; 

                     if(mp[it] == 0){
                        mp.erase(it);
                     }
                     temp[it]++; 
                 }
             }

             mp = temp ; 

        }

        vector<string> ans ; 

        for(auto &it : mp){
            string k = ""; 
            k += it.first ; 
            while(it.second--){
                ans.push_back(k);
            }
        }
        return ans; 
    }
};
class Solution {
public:
    string frequencySort(string s) {

        unordered_map<char ,int > mp ; 

        for(auto &it : s){
            mp[it]++; 
        }

        vector<pair<int , char >> p ; 

        for(auto &it : mp){
            p.push_back({it.second , it.first});
        }

        sort(begin(p) , end(p) , greater<pair<int , char>>());

        string ans = ""; 

        for(auto &it : p){

            while(it.first--){
                ans += it.second; 
            }
        }
        return ans ; 
    }
};
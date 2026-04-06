class Solution {
public:
    vector<int> lexicalOrder(int n) {

        // BRUTEFORCE

        vector<string> res ; 

        for(int i = 1;  i <= n ; i++){
            res.push_back(to_string(i));
        }

        sort(begin(res) , end(res)); 

        vector<int> ans ; 

        for(int i = 0 ; i < n ; i++){
            ans.push_back(stoi(res[i]));
        }
        return ans ; 
    }
};
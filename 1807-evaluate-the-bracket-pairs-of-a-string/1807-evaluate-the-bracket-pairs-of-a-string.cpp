class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {

        int n = s.length(); 

        unordered_map<string , string > mp ; 

        for(auto &vec : knowledge){
            mp[vec[0]] = vec[1];
        }

        int i = 0 ;

        string res = "";  

        while(i < n){

            if(s[i] == '('){
                int j = s.find(')' , i + 1); 
                string su = s.substr(i + 1 , j - i - 1); 
                res += mp.count(su) ? mp[su] : "?"; 
                i = j ; 
            }else{
                res.push_back(s[i]);
            }

            i++;
        }
        return res ; 
    }
};
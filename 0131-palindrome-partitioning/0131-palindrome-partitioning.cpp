class Solution {
public:
    bool ispalin(string &s1){

        string s2 = s1 ; 
        reverse(begin(s2) , end(s2));

        return s2 == s1 ; 
    }
    void getallpart(string &s , int i , vector<string>& partion , vector<vector<string>>& ans ){

        if(i == s.length()){
            ans.push_back(partion);
            return ; 
        }


        for(int j = i ; j < s.length() ; j++){
            string s1 = s.substr(i , j-i+1);
            if(ispalin(s1)){
                partion.push_back(s1);
                getallpart(s , j + 1 , partion , ans);
                partion.pop_back(); 
            }
        }
    }
    vector<vector<string>> partition(string s) {

        vector<string> partion; 
        vector<vector<string>> ans ; 

        getallpart(s , 0 , partion , ans); 

        return ans ; 
        
    }
};
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {

        int n = words.size(); 

        vector<string> ans ; 
        vector<int> freq(26 , 0) ; 

        for(auto &it : words[0]){
            freq[it-'a']++;
        }

        for(int i = 1 ; i  < n ; i++){
            vector<int>temp(26 ,0); 

            for(auto &it : words[i]){
                temp[it - 'a']++;
            }

            for(int j = 0 ; j < 26 ; j++){
                freq[j] = min(temp[j] , freq[j]);
            }
        }

        for(int i = 0 ;  i < 26 ; i++){

            int c = freq[i]; 

            while(c--){
                ans.push_back(string(1 , 'a' + i ));
            }
        }

        return ans; 
        
    }
};
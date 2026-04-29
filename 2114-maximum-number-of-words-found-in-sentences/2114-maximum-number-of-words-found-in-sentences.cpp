class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {

        int ans = 0 ; 

        for(auto &it : sentences){
            int count =  0; 
            for(auto &a : it){

                if(a == ' '){
                    count++;
                }
            }
            ans = max(ans , count + 1) ; 
        }

        return ans ; 
        
    }
};
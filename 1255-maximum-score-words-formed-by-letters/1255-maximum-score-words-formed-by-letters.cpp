class Solution {
public:
    int n ; 
    int ans ; 
    void solve(int i ,vector<string>& words, vector<int>& score,vector<int>&freq , int currscore){

        ans = max(ans , currscore);

        if(i >= n) return ; 

        vector<int> temp = freq ;
        int j = 0 ;  
        int tempscore = 0 ; 

        while(j < words[i].length()){

            char ch = words[i][j]; 

            temp[ch - 'a']--; 

            tempscore += score[ch - 'a'];

            if(temp[ch-'a'] < 0) break ; 

            j++;
        }

        if(j == words[i].length()) solve(i + 1 , words, score , temp , currscore + tempscore);

        solve(i + 1 , words , score , freq , currscore );
    }
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {

        // Backtracking 

        
        n = words.size(); 
        ans = INT_MIN ; 

        vector<int>freq(26 , 0); 

        for(auto &ch : letters){
            freq[ch - 'a']++;
        }

        solve(0 , words , score , freq , 0);

        return ans ; 
        
    }
};
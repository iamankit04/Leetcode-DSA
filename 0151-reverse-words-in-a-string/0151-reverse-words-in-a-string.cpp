class Solution {
public:
    string reverseWords(string s) {

        vector<string> word; 

        int n = s.length(); 

        string str = ""; 
        
        int z = 0 ; 
        while(z < n && s[z] == ' '){
            z++;
        }

        if(z == n) return ""; 

        int l = s.length() - 1;  

        while( l >= 0 && s[l] == ' '){
            l--; 
        }

        for(int i = z ; i <= l;  i++){

            // if(i == 0 && s[i] == ' ') continue; 
            // if(i == 1 && s[i] == ' ' && s[0] == ' ') continue;
            // if(i == n - 1 && s[i] == ' ') continue ; 

             

            if(s[i] == ' '){
                if(str.length() == 0) continue; 
                if(str.length() != 0)
                word.push_back(str); 
                str = ""; 
                continue; 
            }
            
            if(s[i] != ' '){
            str += s[i];
            } 

        }

        word.push_back(str);

        int k = word.size(); 
        string ans = "";

        for(int j = k-1; j >= 0 ; j--){

            ans = ans + word[j];
            if(j == 0) continue; 
            ans = ans + " "; 

        }
        return ans;
    }
};
class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {

        string str = "" ; 

        for(auto &it : words){
            int s = 0 ; 
           for(auto &ch : it){ 
                s += weights[ch - 'a'];
            }

            s %= 26 ; 

            str += char('z' - s);
        }
        return str; 
    }
};
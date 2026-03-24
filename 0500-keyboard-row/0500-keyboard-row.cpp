class Solution {
public:
    vector<string> findWords(vector<string>& words) {

        vector<string> res ; 

        vector<char>st1 = {'q' , 'w' , 'e' , 'r' , 't' , 'y' , 'u' , 'i' , 'o' , 'p'};

        vector<char>st2 = {'a' , 's' , 'd', 'f' , 'g' , 'h' , 'j' , 'k' , 'l'};

        vector<char>st3 = {'z' , 'x' , 'c' , 'v' , 'b' , 'n' , 'm'};

        
        for(int i = 0; i < words.size(); i++) {

            string w = words[i];
            for(auto &c : w) c = tolower(c);  // handle uppercase

            bool valid = true;

            if(find(st1.begin(), st1.end(), w[0]) != st1.end()) {

                for(auto &it : w) {
                    if(find(st1.begin(), st1.end(), it) == st1.end()) {
                        valid = false;
                        break;
                    }
                }

                if(valid) res.push_back(words[i]);
            }

            else if(find(st2.begin(), st2.end(), w[0]) != st2.end()) {

                valid = true;

                for(auto &it : w) {
                    if(find(st2.begin(), st2.end(), it) == st2.end()) {
                        valid = false;
                        break;
                    }
                }

                if(valid) res.push_back(words[i]);
            }

            else {

                valid = true;

                for(auto &it : w) {
                    if(find(st3.begin(), st3.end(), it) == st3.end()) {
                        valid = false;
                        break;
                    }
                }

                if(valid) res.push_back(words[i]);
            }
        }

        return res ; 
    }
};
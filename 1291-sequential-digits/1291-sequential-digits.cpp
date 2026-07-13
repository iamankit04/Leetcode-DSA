class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {

        string s = "123456789"; 
        vector<int> res ; 

        for(int l = 2 ; l <= 9 ; l++){
            for(int i =  0 ; i <= 9 - l; i++){

                int n = stoi(s.substr(i , l));

                if(n >= low && n <= high) res.push_back(n);
            }
        }
        return res; 
    }
};
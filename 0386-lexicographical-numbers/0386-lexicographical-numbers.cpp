class Solution {
public:
    vector<int> res ; 
    void solve(int curr , int n){
        if(curr > n) return ; 

        res.push_back(curr) ; 

        for(int app = 0 ; app <= 9 ; app++){
            int newcurr = (curr * 10) + app ; 

            if(newcurr > n) return ; 

            solve(newcurr , n) ; 
        }
    }
    vector<int> lexicalOrder(int n) {

        // RECURSION 

        for(int start = 1 ; start <= 9 ; start++){
            solve(start , n); 
        }

        return res ; 
        
    }
};
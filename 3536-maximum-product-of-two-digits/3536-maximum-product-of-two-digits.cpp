class Solution {
public:
      int maxProduct(int n) {
        vector<int> res;
        while(n > 0){
            int d = n % 10 ; 
            res.push_back(d); 
            n /= 10 ;
        }

        sort(begin(res) , end(res) , greater<int>()); 

        if(res.empty()) return -1 ;

        if(res.size() == 1) return res[0]; 

        return res[0] * res[1]; 
        
    }
};
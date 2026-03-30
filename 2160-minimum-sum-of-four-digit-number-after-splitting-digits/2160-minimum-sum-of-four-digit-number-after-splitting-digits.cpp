class Solution {
public:
    int minimumSum(int num) {

        vector<int> ans ; 

        while(num > 0){
            int d = num % 10 ; 
            ans.push_back(d); 
            num /= 10 ; 
        } 

        sort(begin(ans) , end(ans)); 

        return ((ans[0]*10) + ans[2]) + ((ans[1] * 10) + ans[3]); 
        
    }
};
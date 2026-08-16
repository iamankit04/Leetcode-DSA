class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {

        int cnt0 = 0  , cnt1 = 0  , cnt2 = 0 ; 

        for(auto &it : stones){
            if(it % 3 == 0){
                cnt0++;
            }else if(it % 3 == 1){
                cnt1++;
            }else{
                cnt2++;
            }
        }

        if(cnt0 % 2 == 0){
            return cnt1 > 0 && cnt2 > 0 ; 
        }
        // long long k = unsigned (abs(cnt1 - cnt2))  ;

        return abs(cnt1 - cnt2) > 2 ;  
    }
};
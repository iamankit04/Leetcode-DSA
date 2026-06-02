class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {

        int n = landStartTime.size(); 
        int m = waterStartTime.size(); 

        int  ml = INT_MAX , mw =INT_MAX , ans = INT_MAX ; 

        for(int i = 0 ; i < n; i++){
            ml = min(ml , landStartTime[i] + landDuration[i]);
        }

        for(int i = 0 ; i  <m ; i++){
            mw = min(mw, waterStartTime[i] + waterDuration[i]);

        }

        for(int i = 0 ; i < m; i++){

            ans = min(ans , max(ml,waterStartTime[i]) + waterDuration[i]);

        }

        for(int i = 0 ; i  < n ; i++){
            ans = min(ans , max(mw , landStartTime[i]) + landDuration[i]);
            
        }
        return ans; 
    }
};
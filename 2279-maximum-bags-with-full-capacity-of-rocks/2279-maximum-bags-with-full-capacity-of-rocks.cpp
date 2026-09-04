class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {

        
        int n = capacity.size(); 
        vector<int> ans(n);

        for(int i = 0 ; i < n ; i++){
            ans[i] = capacity[i] - rocks[i];
        }

        sort(begin(ans) , end(ans)); 
        int cnt = 0 ; 
        int i = 0 ; 

        while(i < n && additionalRocks > 0){
            if(additionalRocks < ans[i]) {
                additionalRocks = 0 ; 
                break ;
            }
            additionalRocks -= ans[i++];
            cnt++;
        }
        return  cnt ; 
    }
};
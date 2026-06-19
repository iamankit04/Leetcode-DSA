class Solution {
public:
    int largestAltitude(vector<int>& gain) {

        int n = gain.size();

        vector<int> res(n+1 , 0);

        for(int i = 0; i < n ; i++){
            res[i+1] = res[i] + gain[i];
        } 

        int m = *max_element(begin(res) , end(res));

        return m ; 
        
    }
};
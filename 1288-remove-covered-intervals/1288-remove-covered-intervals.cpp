class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {

         sort(intervals.begin(), intervals.end(),
             [](vector<int> &a, vector<int> &b) {
                 if (a[0] == b[0])
                     return a[1] > b[1];
                 return a[0] < b[0];
             });

        int n = intervals.size(); 

        int a = intervals[0][0]; 
        int b = intervals[0][1]; 

        pair<int , int> p = {a , b}; 

        int c1 = 1 ; 

        for(int i = 1 ; i < n ; i++){
            int c = intervals[i][0]; 
            int d = intervals[i][1]; 

            if(p.first <= c && d <= p.second) {
                 continue ; 
            }else{
                c1++; 
                p = {c , d};
            }

        }
        return c1 ; 
    }
};
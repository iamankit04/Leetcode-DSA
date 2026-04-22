class Solution {
public:
    int ans = 0 ; 
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {

      int n = points.size(); 
      int x = points[0][0]; 
      int y = points[0][1]; 

      for(int i = 1 ; i < n; i++){
          int a = abs(x - points[i][0]); 
          int b = abs(y - points[i][1]); 
          ans += (max(a , b)); 
          x = points[i][0] ; 
          y = points[i][1]; 
      }

      return ans ; 
        
    }
};
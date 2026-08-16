class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {

        pair<int , int> ans = { INT_MAX , INT_MAX}; 
        int x = target[0]; 
        int y = target[1];  

        for(int i = 0 ; i  < drones.size(); i++){

            auto vec = drones[i]; 
            int a = vec[0]; 
            int b = vec[1]; 
            int r = vec[2]; 

            int distance = abs(a - x) + abs(b - y);

            if(distance <= r){
                ans = min(ans , {distance , i}); 
            }
        }

        if(ans.second == INT_MAX) return -1 ; 
        return ans.second ; 
    }
};
class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {

        unordered_map<int , unordered_set<int>> mp ; 

        for(auto &it : reservedSeats){
            int u = it[0]; 
            int v = it[1]; 

            mp[u].insert(v);
        }

        int ans = (n - mp.size()) * 2 ;  

        for(auto &it : mp){

            auto a = it.first; 
            auto b = it.second; 

            auto isAvl = [&](int seat){
                return !b.count(seat); 

            };

            bool grpA = isAvl(2) && isAvl(3) && isAvl(4) && isAvl(5);
            bool grpB = isAvl(4) && isAvl(5) && isAvl(6) && isAvl(7); 
            bool grpC = isAvl(6) && isAvl(7) && isAvl(8) && isAvl(9);

            if(grpA && grpC){
                 ans += 2 ;
            }else if(grpA || grpB || grpC) {
                ans += 1 ; 
            }


        }
        return ans ; 
    }
};
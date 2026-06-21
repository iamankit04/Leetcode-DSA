class Solution {
public:
    int maxDistance(string moves) {

        int x = 0 , y = 0 , c = 0 ; 

        for(auto &it : moves){

            if(it == 'L') x--;
            else if(it == 'R') x++; 
            else if(it == 'U') y++;
            else if(it == 'D') y--;
            else c++;
        }

        int ans = abs(0 - x) + abs(0 - y); 

        return ans + c ; 
        
    }
};
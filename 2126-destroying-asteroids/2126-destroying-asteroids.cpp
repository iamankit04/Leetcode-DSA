class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {

        sort(begin(asteroids) , end(asteroids));

        long long mass1  = mass;  

        int n = asteroids.size(); 

        for(int i = 0 ; i < n; i++){

            if(mass1 >= asteroids[i]){
                mass1 += (long long) asteroids[i];
            }else{
                return false; 
            }
        }

        return true; 
        
    }
};
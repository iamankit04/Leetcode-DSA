class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {

        int ans = requests[0]; 
        int k = requests[0]; 

        for(int i = 1 ; i < requests.size(); i++){
            k = abs(k - requests[i]); 
            ans += k ; 
            k = requests[i]; 

        }
       return ans;   
    }
};
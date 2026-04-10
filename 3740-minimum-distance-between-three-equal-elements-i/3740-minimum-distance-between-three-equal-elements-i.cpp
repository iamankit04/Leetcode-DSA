class Solution {
public:
    int minimumDistance(vector<int>& nums) {

        int n = nums.size(); 

        unordered_map<int, vector<int>> freq;

        for(int i = 0 ; i < n ; i++){
            freq[nums[i]].push_back(i);
        }
        int ans = 0 ; 
        int mini = INT_MAX ; 
        for(auto& [num, indices] : freq){

            if(indices.size() >= 3){
                 for(int i = 0; i < indices.size(); i++) {
                    for(int j = i + 1; j < indices.size(); j++) {
                        for(int k = j + 1; k < indices.size(); k++) {
                            int dist = abs(indices[i] - indices[j]) + 
                                      abs(indices[j] - indices[k]) + 
                                      abs(indices[k] - indices[i]);
                            mini = min(mini, dist);
                        }
                    }
                }
        }
        }
    
            
        return mini == INT_MAX ? -1 : mini; 
    }
};
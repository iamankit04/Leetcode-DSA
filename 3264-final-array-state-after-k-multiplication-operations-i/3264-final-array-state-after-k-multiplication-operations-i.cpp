class Solution {
public:
    typedef pair<int, int> p; 
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {

        int n = nums.size();

        priority_queue<p , vector<p> , greater<p>> pq ; 

        for(int i = 0 ; i < n ; i++){
            pq.push({nums[i] , i});
        }


        while(!pq.empty() && k--){
            auto curr = pq.top(); pq.pop(); 
           int  v1 = curr.first * multiplier ; 
            nums[curr.second] = v1 ; 
            pq.push({v1 , curr.second});
        }

        return nums ; 
        
    }
};
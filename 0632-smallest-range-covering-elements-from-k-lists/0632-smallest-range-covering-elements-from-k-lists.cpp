class Solution {
public:
    typedef pair<int , pair<int ,int>> p; 
    vector<int> smallestRange(vector<vector<int>>& nums) {

        // HEAP 

        int n = nums.size(); 
        if(n == 0) return {};

        priority_queue<p, vector<p> , greater<p>> pq ; 

        int mnel , mxel = INT_MIN ; 
        vector<int> ans(2); 

        for(int i = 0 ; i < n ; i++){
            pq.push({nums[i][0] , {i , 0}});
            mxel = max(mxel , nums[i][0]);
        }

        mnel = pq.top().first ; 
        ans[0] = mnel ; 
        ans[1] = mxel; 

        int e , r , c ; 

        while(pq.size() == n){

            auto curr = pq.top(); 
            pq.pop(); 

            int e = curr.first ; 
            int r = curr.second.first ; 
            int c = curr.second.second ; 

            if(c + 1 < nums[r].size()){

                c++; 

                pq.push({nums[r][c] ,{r , c}}); 
                mnel = pq.top().first ; 
                mxel= max(mxel , nums[r][c]); 

                if(mxel - mnel < ans[1] - ans[0]){
                    ans[1] = mxel ; 
                    ans[0] = mnel; 
                }
            }
        }

      return ans ; 

        
    }
};
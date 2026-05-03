class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {

        //heap

        long long sum = 0 ; 

        priority_queue<long long > pq(nums.begin(), nums.end());

        while(k--){
            int mx = pq.top(); 
            pq.pop(); 

            sum += mx;

            mx = ceil(mx / 3.0); 

            pq.push(mx);
        }
        return sum ; 
    }
};
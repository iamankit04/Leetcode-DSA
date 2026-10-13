class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {

        int n = nums.size(); 

        auto comp = [&](int &a , int &b){
            return abs(a) > abs(b);
        };

        sort(begin(nums), end(nums) , comp);

        int h = (n+1)/2;

        vector<long long> high(nums.begin() , nums.begin() + h);
        vector<long long>low(nums.begin() + h , nums.end()); 

        long long ans = 0 ; 

        for(int i = 0;  i < n ; i++){

            if(i % 2 == 0){
                ans += (long long)high[i/2]*high[i/2];
            }else {
                ans -= (long long)low[i/2]*low[i/2];
            }
        }
        return ans ; 
    }
};
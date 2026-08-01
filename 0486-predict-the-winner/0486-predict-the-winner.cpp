class Solution {
public:
    bool solve(int i , int j , vector<int>&nums , int p1 , int p2 , int t ){

        if(i > j) return p1 >= p2 ; 

        if(t % 2 == 0){
            return solve(i + 1 , j , nums, p1 + nums[i] , p2 , t + 1) || solve(i , j - 1 , nums , p1 + nums[j] , p2 , t + 1);
        }

        return solve(i + 1 , j , nums , p1 , p2 + nums[i], t + 1) && solve(i , j - 1 , nums , p1 , p2 + nums[j] , t + 1);
    }
    bool predictTheWinner(vector<int>& nums) {

        // recursion 

        return solve(0 , nums.size() - 1 , nums , 0 ,  0 , 0);
        
    }
};
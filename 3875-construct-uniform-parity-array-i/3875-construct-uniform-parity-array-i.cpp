class Solution {
public:
    bool uniformArray(vector<int>& nums1) {

        int n= nums1.size();

        int cnt1 = 0 , cnt2 = 0 ;
        
        if(n == 0) return false; 

        for(int i = 0 ; i < n ;i++){
            if(nums1[i] == nums1[0]){
                cnt1++;
            }else{
                cnt2++;
            }
        }

        return cnt1 == 1 || cnt2 == 1 || cnt1 == 0 || cnt2 == 0 ;   
        
    }
};
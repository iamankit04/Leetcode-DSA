class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        sort(begin(nums1) , end(nums1));

        if(nums1[0] % 2 == 1) return true ; 

        for(auto &it : nums1){
            if(it % 2 != 0) return false;  
        }

        return true ; 
    }
};
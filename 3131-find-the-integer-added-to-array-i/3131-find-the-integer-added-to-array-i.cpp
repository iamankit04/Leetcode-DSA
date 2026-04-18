class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {

        int n = nums1.size(); 
    

        int a = accumulate(begin(nums1) , end(nums1) , 0);
        int b = accumulate(begin(nums2) , end(nums2) , 0) ; 

        return (b-a)/n; 
        
    }
};
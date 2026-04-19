class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {

        int n = nums1.size(); 
        int n1 = nums2.size();
        int i = 0 , j = 0; 
        int ans = 0 ; 
        

        while(i < n && j < n1){
            if(nums2[j] >= nums1[i]){
              ans = max(ans , j- i );
              j++;
             }else{
               i++;
             }



        }

        return ans; 
        
    }
};
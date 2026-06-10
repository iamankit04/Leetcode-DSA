class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        
        vector<int> res ; 
        unordered_set<int> st1 , st2 , st3 , st4 ; 

        for(auto &it : nums1){
            st2.insert(it);
        }

        for(auto &it : nums2){
            st3.insert(it);
        }

        for(auto &it : nums3){
            st4.insert(it);
        }

        for(auto &it : nums1){
            st1.insert(it);
        }

        for(auto &it : nums2){
            st1.insert(it);
        }

        for(auto &it : nums3){
            st1.insert(it);
        }

        for(auto &it : st1){

            int c = 0 ; 

            if(st2.count(it)){
                c++;
            }

             if(st3.count(it)){
                c++;
            }

             if(st4.count(it)){
                c++;
            }

            if(c >= 2){
                res.push_back(it);
            }
        }

        return res; 
    }
};
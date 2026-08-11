class Solution {
public:
    int missingInteger(vector<int>& nums) {

        unordered_set<int> st ; 

        for(auto &it : nums){
            st.insert(it); 
        }

       
    
        int n = nums.size(); 

        unordered_map<int , vector<int>> mp ; 

        for(int i = 0; i < n ; i++){
            for(int j = 1 ; j <= i; j++){
                if(nums[j] == nums[j-1] + 1){
                    mp[i].push_back(nums[j]);
                }else{
                     mp[i].clear();
                    break ; 
                }
            }
        }

        int k = 0; 

        for(auto &it : mp){
            k = max(k , (int)it.second.size()); 
        }
        
        int sum = nums[0] ; 
        for(auto &it : mp){

           

            if(it.second.size() == k){
                vector<int> m = it.second;
                

                for(int i = 0 ; i < m.size(); i++){
                     sum += m[i];
                }
            }
        }

        int i = sum; 

        while(i < 5000){
            if(st.count(i)){
                i++;
            }else{
                return i  ;
            }
        }

       return -1 ;  
        
    }
};
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {

        vector<int> temp = arr ; 
        sort(begin(temp) , end(temp));

        int r = 1 ; 
        unordered_map<int , int > mp ; 

        for(auto &it : temp){

            if(!mp.count(it)){
                mp[it] = r;
                r++;
            }
        }

        int n = arr.size(); 

        for(int i = 0; i < n ; i++){
            arr[i] = mp[arr[i]];
        }
        return arr; 
    }
};
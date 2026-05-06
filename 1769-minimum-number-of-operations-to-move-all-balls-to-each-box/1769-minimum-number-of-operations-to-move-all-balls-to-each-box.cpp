class Solution {
public:
    vector<int> minOperations(string boxes) {

        int n = boxes.length(); 

        vector<int> res ; 
        vector<int> ans ; 

       for(int i = 0 ; i  <n ; i++){
           if(boxes[i] == '1'){
             res.push_back(i);
           }
       }

        for(int i = 0 ; i < n ; i++){

            int a = 0 ; 

            for(auto &it : res){
                a += (abs(i - it));
            }

            ans.push_back(a);
        }

        return ans; 
        
    }
};
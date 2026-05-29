class Solution {
public:
    int minElement(vector<int>& nums) {

        vector<int> res ; 

        for(auto &num : nums){

            int sum = 0 ; 

            while(num != 0){
                int d = num % 10 ; 
                sum += d ; 
                num /= 10 ; 
            }

            res.push_back(sum);
        }

        int m = *min_element(begin(res) , end(res)); 

        return m ; 
        
    }
};
class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        
        int count = 0 ; 

        int n= endTime.size(); 

        for(int i = 0 ;  i < n ; i++){
            if(endTime[i] >= queryTime && startTime[i] <= queryTime){
                count++;
            }
        }

        return count ; 
    }
};
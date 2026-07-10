class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {

        int totalday = day ; 
        vector<string> days= {"Friday", "Saturday","Sunday", "Monday","Tuesday", "Wednesday", "Thursday"};
        vector<int> ye = {31 , 28 , 31 , 30 , 31, 30,31,31,30,31,30,31};

        if((year % 4 == 0 && year % 100 != 0)|| (year % 400 == 0)){
            ye[1] = 29 ; 
        }

        for(int yk = 1971 ; yk < year ; yk++){

            if((yk % 4 == 0 && yk % 100 != 0) || (yk % 400 == 0)){
                   totalday += 366;
            }else{
                 totalday += 365; 
            }
        }

        for(int i = 0 ; i < month-1 ; i++){
            totalday += ye[i]; 
        }


        int ans = totalday % 7 ; 

        if(ans == 0){
            return days[days.size()-1];
        }

        return days[ans-1];
    }
};
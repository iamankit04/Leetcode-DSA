class Solution {
public:
    double angleClock(int hour, int minutes) {
        
        double h = (hour * 30) + (0.5 * minutes) ; 
        double m = 6 * minutes; 

        double d = abs(m - h);

        double ans = min(d , 360 - d)*1.0 ; 

        return ans; 
    }
};
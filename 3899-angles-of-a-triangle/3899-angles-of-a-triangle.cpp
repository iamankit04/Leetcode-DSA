class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {

        // cosinr rule 

        int a = sides[0] ; 
        int b = sides[1] ; 
        int c = sides[2] ; 

    
        if (a + b <= c || b + c <= a || a + c <= b) {
            return {};
        }

        vector<double> res; 

       
        double A = acos((b*b + c*c - a*a) / (2.0*b*c)) * 180.0 / M_PI;
        double B = acos((a*a + c*c - b*b) / (2.0*a*c)) * 180.0 / M_PI;
        double C = 180.0 - A - B;

        res.push_back(A) ; 
        res.push_back(B) ; 
        res.push_back(C) ; 

        sort(begin(res) , end(res)); 

        return res; 
        
    }
};
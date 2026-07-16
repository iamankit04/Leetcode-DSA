class Solution {
public:
    int secondsBetweenTimes(string s, string e) {

        string h = ""; 
        h += s[0]; 
        h += s[1]; 

        int h1 = stoi(h); 

        string m = ""; 
        m += s[3]; 
        m += s[4]; 

        int m1 = stoi(m);

        string sec = ""; 
        sec += s[6]; 
        sec += s[7]; 

        int sec1 = stoi(sec);

        string he = ""; 
        he += e[0]; 
        he += e[1]; 

        int h2 = stoi(he); 

        string me = ""; 
        me += e[3]; 
        me += e[4]; 

        int m2 = stoi(me);

        string sece = ""; 
        sece += e[6]; 
        sece += e[7]; 

        int sec2 = stoi(sece);

        int ans1 = (h1 * 60 * 60 ) + (m1 * 60) + sec1; 
        int ans2 = (h2 * 60 * 60) + (m2 * 60) + sec2; 

        return abs(ans1 - ans2); 

         
        
    }
};
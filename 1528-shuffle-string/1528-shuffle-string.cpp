class Solution {
public:
    typedef pair<int , char> p ; 
    string restoreString(string s, vector<int>& indices) {
       int n = indices.size(); 

       priority_queue< p , vector<p> , greater<p>> pq ; 

       for(int i = 0 ; i  < n ; i++){
          pq.push({indices[i], s[i]});
       }

       string s1 = "" ; 

       while(!pq.empty()){
          auto curr = pq.top(); 
          pq.pop(); 

          s1 += curr.second ; 
       } 

       return s1 ;     
    }
};
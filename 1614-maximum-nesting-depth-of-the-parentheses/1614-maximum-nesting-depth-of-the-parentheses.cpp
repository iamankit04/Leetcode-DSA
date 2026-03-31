class Solution {
public:
    int maxDepth(string s) {

        int cd = 0 , md = 0 ; 
 
        for(auto &a : s){

            if(a == '('){
               cd++; 
               md = max(md , cd) ;

            }else if(a == ')'){ 
                cd--;
            
            }
        }
        return md; 
    }
};
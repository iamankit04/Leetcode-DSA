class Solution {
public:
    int maxNumberOfBalloons(string text) {

        unordered_map<char , int > mp ; 

        for(auto &it : text){

            if(it == 'b' || it == 'a' || it == 'l' || it == 'o' || it == 'n'){
                mp[it]++;
            }
        }

         if(mp['b'] == 0 || mp['a'] == 0 || mp['l'] == 0 ||
           mp['o'] == 0 || mp['n'] == 0) {
            return 0;
        }

        int me = INT_MAX ;

        for(auto &it : mp){
            me = min(me , it.second);
        }

        for(auto &it : mp){

            if(it.first == 'l' || it.first == 'o'){
                me = min(me , it.second/2);
            }else{
                me = min(me  ,it.second);
            }
        }


        return me ; 
    }
};
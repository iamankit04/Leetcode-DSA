class Solution {
public:
    int m , n ; 
    vector<vector<int>> directions = {{1 , 0} , {-1 , 0 } , {0, 1} , {0, -1}}; 
    bool find(vector<vector<char>>& board, string word , int i , int j , int idx){

        if(idx == word.length()) return true ; 

        if(i >= m || i < 0 || j >= n || j < 0 || board[i][j] != word[idx] || board[i][j] == '#') return false ; 

        char temp = board[i][j] ; 
        board[i][j] = '#' ; 

        for(auto &dir : directions){
            int i_ = i + dir[0]; 
            int j_ = j + dir[1] ; 

            if(find(board , word , i_ , j_ , idx + 1)) return true; 
        }


        board[i][j] = temp ; 


        return false ; 
    }
    bool exist(vector<vector<char>>& board, string word) {

        //Backtracking

        m = board.size(); 
        n = board[0].size(); 

        for(int i = 0 ;  i < m ; i++){
            for(int j = 0 ; j  < n ; j++){

                if(board[i][j] == word[0] && find(board , word , i , j , 0))
                         return true ; 
            }
        }

        return false ; 
        
    }
};
class Solution {
public:
    int m , n ; 
    vector<string> result ; 
    vector<vector<int>> direction = {{0, 1} , {1 , 0} , {-1 , 0} , {0, -1}};

    struct trienode{
        bool endofword ;
        string word ; 
        trienode* children[26];
    };

    trienode* getnode(){

        trienode* temp = new trienode(); 
        temp ->endofword = false ; 
        string word = ""; 

        for(int i = 0 ;  i < 26 ; i++){
            temp ->children[i] = NULL ; 
        }

        return temp ; 
    }

    void insert(trienode* root , string str){

        trienode* crawler = root ; 

        for(auto &s : str){

            if(crawler->children[s - 'a'] == NULL){
               crawler->children[s - 'a'] = getnode(); 
            }

            crawler = crawler->children[s - 'a']; 
        }

        crawler -> endofword = true ; 
        crawler -> word = str ; 
    }

    void dfs(vector<vector<char>>& board, trienode* root , int i , int j){

        if(i < 0 || i >= m || j < 0 || j >=  n || board[i][j] == '#' || root -> children[board[i][j] - 'a'] == NULL)
            return ; 

        root = root -> children[board[i][j] - 'a'];

        if(root -> endofword == true){
            result.push_back(root -> word);
            root -> endofword = false ; 
        }

        char temp = board[i][j] ; 
        board[i][j] = '#'; 

        for(auto &dir : direction){

            int new_i = i + dir[0]; 
            int new_j = j + dir[1]; 

            dfs(board , root , new_i , new_j);
        }

        board[i][j] = temp ; 


    }
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {

        // using TRIE

          m = board.size(); 
          n = board[0].size(); 

          trienode* root = getnode(); 

          for(auto &str : words){
             insert(root , str); 
          }

          for(int i = 0 ; i < m ; i++){
            for(int j = 0 ;  j < n; j++){

                char ch = board[i][j]; 

                if(root -> children[ch - 'a'] != NULL){
                    dfs(board ,root ,  i , j);
                }
            }
          }

          return result ; 
        
    }
};
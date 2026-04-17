class Solution {
public:
    bool solve(vector<vector<int>>& grid , int n , int r , int c , int expv){

        if(r < 0 || r >= n || c < 0|| c >= n || grid[r][c] != expv){
            return false ; 
        }

        if(expv == n*n-1){
            return true; 
        } 

        bool ans1 = solve(grid , n , r-2 , c+1 , expv+1);
        bool ans2 = solve(grid , n , r-1 , c+2 , expv+1);
        bool ans3 = solve(grid , n , r+1 , c+2 , expv+1);
        bool ans4 = solve(grid , n , r+2 , c+1 , expv+1);
        bool ans5 = solve(grid , n , r+2 , c-1 , expv+1);
        bool ans6 = solve(grid , n , r+1 , c-2 , expv+1);
        bool ans7 = solve(grid , n , r-1 , c-2 , expv+1);
        bool ans8 = solve(grid , n , r-2 , c-1 , expv+1);

        return ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8; 
    }
    bool checkValidGrid(vector<vector<int>>& grid) {

        // BACKTRACKING 

        int n = grid.size(); 

        return solve(grid, n , 0, 0, 0);
        
    }
};
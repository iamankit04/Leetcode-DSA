/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans  ; 
    int find(TreeNode* root , int &cnt){

        if(root == NULL) return 0 ; 

        cnt++;

        int l = find(root -> left , cnt); 
        int r = find(root -> right , cnt); 

        return l + r + root -> val;
    }
    void solve(TreeNode* root){

        if(root == NULL) return ; 

        int cnt = 0 ; 
        int ts = find(root , cnt); 

        int avg = ts / cnt ; 

        if(avg == root -> val) ans++; 

        solve(root -> left); 
        solve(root -> right);
    }
    int averageOfSubtree(TreeNode* root) {
          
       ans = 0 ; 
       solve(root); 
       return ans ; 
        
    }
};
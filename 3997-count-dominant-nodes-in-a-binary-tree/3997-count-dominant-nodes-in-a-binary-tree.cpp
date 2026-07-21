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
    int cnt = 0 ; 
    int solve(TreeNode* root){

        if(root == NULL) return INT_MIN ; 

        int l = solve(root -> left); 
        int r = solve(root -> right) ; 

        if(root -> val >= l && root -> val >= r) cnt++; 

        return max({l , r , root -> val});
    }
    int countDominantNodes(TreeNode* root) {
       //DFS
       solve(root); 
       return cnt ; 
    }
};
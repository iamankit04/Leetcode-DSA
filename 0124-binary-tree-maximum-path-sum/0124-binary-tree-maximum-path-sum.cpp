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
    int maxpath ; 
    int solve(TreeNode* root){

        if(root == NULL) return 0 ; 

        int l = solve(root -> left); 
        int r = solve(root -> right) ; 

        int neche = root -> val + l + r ; 
        int onlyroot = root -> val ; 
        int any = root -> val + max(l , r); 

        maxpath = max({maxpath , neche , onlyroot , any}); 

        return max(onlyroot , any); 
    }
    int maxPathSum(TreeNode* root) {

        maxpath= INT_MIN;  

        solve(root) ; 

        return maxpath ; 
        
    }
};
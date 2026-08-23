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
    int n ;
    void build(TreeNode* temp , vector<int> &ans , int & i ){
       
       while(i != n){

        temp -> right = new TreeNode(ans[i++]);
        temp = temp -> right; 
       }
    
    }
    void preorder(TreeNode* root , vector<int> & ans ){

        if(root == NULL) return ; 

        preorder(root -> left , ans);
        ans.push_back(root -> val); 
        preorder(root -> right , ans); 
    }
    TreeNode* increasingBST(TreeNode* root) {

        if(root == NULL) return root ; 

        vector<int> ans ; 
        preorder(root , ans); 

        n = ans.size(); 

        TreeNode* temp = new TreeNode(ans[0]);
        TreeNode* res = temp ; 

        int i = 1 ; 

        build(temp , ans , i); 

        return res; 
        
    }
};
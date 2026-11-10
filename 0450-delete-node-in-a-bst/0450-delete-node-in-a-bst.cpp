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
    TreeNode* findpre(TreeNode* root){

        TreeNode* curr = root;

        while(curr -> right != NULL){

            curr = curr -> right;

        }

        return curr ; 
    }
    TreeNode* deleteNode(TreeNode* root, int key) {

        if(root == NULL) return root ;

        if(key < root -> val){
            root -> left = deleteNode(root -> left , key);
        }else if(key > root -> val){
            root -> right = deleteNode(root -> right , key); 
        }else{

            //no child ; 

            if(root -> left == NULL && root -> right == NULL) return NULL; 

            //single child 

            if(root -> left == NULL) {
                return root -> right ; 

            } else if(root -> right == NULL) {
                return root -> left ; 
            }else{

                TreeNode* node = findpre(root -> left); 
                root -> val = node -> val ; 

                root -> left = deleteNode(root -> left , node -> val); 
            }


        }

        return root ; 
        
    }
};
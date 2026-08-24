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
    void preorder(TreeNode* root , set<int> &st){

        if(root == nullptr){
            return ; 
        }

        preorder(root -> left , st );
        st.insert(root -> val);
        preorder(root -> right , st);
    }
    int findSecondMinimumValue(TreeNode* root) {

        set<int>st ;  

        preorder(root , st);

        int ans = -1 ; 
        int i = 0 ; 

        for(auto &it : st){

            
            i++;

            if(i == 2){
            ans = it ;
             break ;
            }
        }
        return ans; 
    }
};
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
    bool isCompleteTree(TreeNode* root) {

        queue<TreeNode*> q ; 

        q.push(root); 

        bool isn = false ; 

        while(!q.empty()){

            int n = q.size(); 

            while(n--){

                auto curr = q.front(); 
                q.pop(); 

                if(curr == NULL) {
                    isn = true; 
                    continue ; 
                }

                if(isn && curr != NULL) return false ; 

                 q.push(curr -> left); 
                 q.push(curr -> right);
            }
        }
        return true; 
    }
};
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        if(root == NULL) return {}; 

        vector<vector<int>> ans ; 

        queue<TreeNode*> q ; 
        q.push(root); 
        bool flag = false ; 
        while(!q.empty()){

            int n = q.size(); 

            vector<int> temp; 

            while(n--){

                auto curr = q.front(); 
                q.pop(); 

                temp.push_back(curr -> val);

                if(curr -> left){
                    q.push(curr -> left);
                }

                if(curr -> right){
                    q.push(curr -> right);
                }
            }

            if(flag){
                reverse(begin(temp) , end(temp));
                ans.push_back(temp);
            }else{
                ans.push_back(temp);
            }

            flag = !flag; 
            temp.clear(); 
        }

        return ans ; 
        
    }
};
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
    int ans ; 
    vector<int> solve(TreeNode* root){
        if(root == NULL){
            return {INT_MAX , INT_MIN , 0};
        }

        vector<int> l = solve(root -> left);
        vector<int> r = solve(root -> right);

        if(root -> val > l[1] && root -> val < r[0]){

            int currsum = l[2] + r[2] + root -> val ;
            ans = max(ans , currsum);
            int mnv = min(root -> val , l[0]);
            int mxv = max(root -> val , r[1]);

            return {mnv , mxv , currsum};
        }
        int newsum = max(l[2] , r[2]);
        return {INT_MIN, INT_MAX , newsum};
    }
    int maxSumBST(TreeNode* root){

        ans = 0; 

        solve(root);

        return ans ;
    }
};
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
    void fiiling(TreeNode* root , vector<int> &arr){
        if(root == NULL) return ; 

        arr.push_back(root -> val);
        fiiling(root -> left , arr); 
        fiiling(root -> right , arr); 
    }
    bool findTarget(TreeNode* root, int k) {

        vector<int> arr ; 
        fiiling(root , arr); 
        sort(begin(arr) , end(arr)); 
        int i = 0 , j = arr.size() - 1 ; 

        while(i < j){

            if(arr[i] + arr[j] == k) return true ; 
            else if(arr[i] + arr[j] > k){
                j--;
            }else{
                i++;
            }
        }
        return false ; 
    }
};
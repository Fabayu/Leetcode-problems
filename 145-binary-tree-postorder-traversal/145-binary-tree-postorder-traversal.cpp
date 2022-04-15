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
    vector<int> postorderTraversal(TreeNode* root) {
                vector<int> ans;
        solve(root,ans);
        return ans;
    }
public:
    void solve(TreeNode* root , vector<int>& ans){
        //BASE CASE
        if(!root){
            return;
        }
        //LEFT
        solve(root->left,ans);
        //RIGHT
        solve(root->right,ans);
        //NODE
        ans.push_back(root->val);
    }

    
};
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
    bool hasPathSum(TreeNode* root, int S) {
        
        
        if(root==NULL)return false;
    
    if(S==root->val&&root->left==NULL&&root->right==NULL){
        return true;
    }
    else{
        
     return hasPathSum(root->left,S-root->val)||hasPathSum(root->right,S-root->val);
    }   
        
       
    }
};
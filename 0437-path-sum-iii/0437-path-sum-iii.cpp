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
    int inroot(TreeNode* root,long long sum){
        if(root==nullptr)return 0;
        long long  res=0;
        if(sum==root->val)res++;
        
        res+=inroot(root->left,sum-root->val);
        res+=inroot(root->right,sum-root->val);
        return res;
    }
    int pathSum(TreeNode* root, long long s) {
        if(root==nullptr)return 0;
      return   pathSum(root->left,s)+inroot(root,s)+pathSum(root->right,s);
    }
};
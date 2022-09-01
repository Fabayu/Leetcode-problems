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
    int helper(TreeNode* root,int maxi){
        if(root==NULL){
            return 0;
        }
        int ans=0;
        if(maxi<=root->val){
            ans=1;
            
        }
        maxi=max(maxi,root->val);
     int l=helper(root->left,maxi);
        int r=helper(root->right,maxi);
        ans+=l+r;
        return ans;
    }
public:
    int goodNodes(TreeNode* root) {
    
   return helper(root,INT_MIN);
    }
};
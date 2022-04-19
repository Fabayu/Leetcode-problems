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
    int cnt;
         int res=0;

     int kthSmallest(TreeNode* root, int k) {
        
         cnt=k;
         Kutil(root);
         return res;
         
     }
    
    void Kutil(TreeNode* root){
        if(root==NULL){
            return;
        }
        Kutil(root->left);
        cnt-=1;
        
        if(cnt==0){
            res=root->val;
            return ;
        
        }
        Kutil(root->right);
        return ;
    }
    
};
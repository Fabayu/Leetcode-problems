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
    
    void helper(TreeNode* root,vector<int> &ans){
        if(root==NULL){
            return ;
            
        }
        helper(root->left,ans);
        ans.push_back(root->val);
        helper(root->right,ans);
        
    }
vector<int> inorderTraversal(TreeNode* root) {
    vector<int> ans;
    if(root==NULL) return ans ;
    helper(root,ans);
    return ans;
}
};






//  //using morris traversal
//  vector<int>res;
//  TreeNode* cur=root;
//  while(cur!=NULL){
//      if(cur->left==NULL){
//          res.push_back(cur->val);
//          cur=cur->right;
//      }else{
//          TreeNode* prev=cur->left;
//          //move to the right most node in the cur's left subtree
//          //while checking if there is no thread already present
//          while(prev->right  && prev->right!=cur) {
//              prev=prev->right;
//          }
//          //There are two possible outcome:
//          if(prev->right==NULL){
//              prev->right=cur;
//              cur=cur->left;
//          }else{
//              //break the existing thread and push the current val
//              prev->right=NULL;
//              res.push_back(cur->val);
//              cur=cur->right;
//          }
         
//      }
//  }
//  return res;
 
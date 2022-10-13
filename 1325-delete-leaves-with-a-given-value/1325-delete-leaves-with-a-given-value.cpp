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
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
     
       




   if(root==NULL)
            return NULL;
        if(root->left==NULL && root->right==NULL ){   //check if its leaf node
            if(root->val==target)  //if its the leafnode with targetvalue delete it
                return NULL;
            //the ideais if we return null instead of its address then its parents left or right will be null and thus it will be deleted from the tree
            else
                return root;  //if its not the target dont delete
        }
        
        root->left=removeLeafNodes(root->left,target);   //recursively check left
        root->right=removeLeafNodes(root->right,target);  //and right
         //after deletion of leafs, a earlier parent node may become leaf node with same target value so we need to recheck.
            
       if(root->left==NULL && root->right==NULL ){ 
            if(root->val==target)
                    return NULL;
         else
                return root;
        }
        
        return root;
    }
};
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


/*  // r1->left is 3 and r2->right = 3
        // Both values are same , they will by pass both if and else if statement
        // Now again r1->left is null and r2->right is null
        
        
        // so true will be returned to caller, and thus tree is mirror of itself.
    */
class Solution {
public:
    

         bool solve(TreeNode* left,TreeNode* right){
        if(left==NULL && right==NULL)
            return true;
        
        if((left==NULL && right!=NULL) || (left!=NULL && right==NULL) || (left->val!=right->val))
            return false;
        //  will return true from first if condtion
        // Now the scene is : we have executed first solve() before && and it has
        // returned us True so expression becomes ' return true && solve() '
        // solve after && will execute 
        return solve(left->left,right->right) && solve(left->right,right->left);
        
    }
    
    bool isSymmetric(TreeNode* root) {
        
        // Similarly it will check for 4 and 4 
        // next time both will become null, so will return true
        //  solve() at the end will also hold true
        //  we know 'true && true' is true
        return solve(root->left,root->right);
    }
};
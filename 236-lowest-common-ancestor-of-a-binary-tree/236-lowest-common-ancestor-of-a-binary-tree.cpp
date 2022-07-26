/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */



class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL ||root ==p || root==q){
            return root;
        }
         
            TreeNode* left=lowestCommonAncestor(root->left,p,q);//left mara 
            TreeNode* right=lowestCommonAncestor(root->right,p,q);//right mara
        
            if(right==NULL){//right nhi to left hi shi
                return left;
                
            }
    else if(left==NULL){//left nhi toright hi shi
        return right;
    }
        
    else{
     return root;//nhi to yhi h wo bnda jo bolega mere under h dono
    }
    }

};
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
    int ans=0;
    int sum=0;
    void pre(TreeNode*p,int height){
        if(p){
            ans++;
            if(ans==height)
              sum+=p->val;
            pre(p->left,height);
            pre(p->right,height);
            ans--;
        }
    }
     int maxdept(TreeNode *root){
         if(root){
             int x=maxdept(root->left);
             int y=maxdept(root->right);
             if(x>y)
                 return x+1;
             else
                 return y+1;
         }
         return 0;
     }
    int deepestLeavesSum(TreeNode* root) {
        int height=maxdept(root);
        pre(root,height);
        return sum;
    }
};

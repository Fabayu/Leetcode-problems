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
    
            vector<string> binaryTreePaths(TreeNode* root) {
                vector<string> v;
                if(root)
                    preorder(v,root,"");
                return v;
            }
            void preorder(vector<string>& v,TreeNode* r,string t){
                if(!r)
                    return;
                if(!t.empty())
                    t+=("->"+to_string(r->val));
                else t+=to_string(r->val);
                if(r->left||r->right){
                    preorder(v,r->left,t);
                    preorder(v,r->right,t);
                }else{
                    v.push_back(t);
                }
            }
        };
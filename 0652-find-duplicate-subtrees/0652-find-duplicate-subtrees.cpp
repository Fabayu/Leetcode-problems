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
    map<string,int> mp;
    string get(TreeNode* root,vector<TreeNode*> &res){
      if(!root)return "#";
        string s=get(root->left,res)+','+get(root->right,res)+','+to_string(root->val);
        mp[s]++;
        if(mp[s]==2)res.push_back(root);
            return s;
    }
    
    
    
    
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        vector<TreeNode*> res;
        get(root,res);
        return res;
    }
};
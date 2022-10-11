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
    
    









void pkld(TreeNode* root, int k, vector<int> &ans, TreeNode* blocker){
if(root==NULL || k<0 || root==blocker){
return;
}
if(k == 0){
ans.push_back(root->val);
}
pkld(root->left, k-1, ans, blocker);
pkld(root->right, k-1, ans, blocker);
}
vector<TreeNode*> arr;
bool find(TreeNode *root, int t){
if(!root)
return 0;
if(root->val == t){
arr.push_back(root);
return true;
}

 bool lf = find(root->left, t);
 if(lf){
     arr.push_back(root);
     return true;
 }
 
 bool rf = find(root->right, t);
 if(rf){
     arr.push_back(root);
     return true;
 }
 
 return false;
}
vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
vector <int> res;
if(find(root, target->val)){
for(int i = 0;i < arr.size();i++){
pkld(arr[i], k-i, res, i == 0?NULL:arr[i-1]);
}
}
    else{
return res;
}
return res;
}
};
   
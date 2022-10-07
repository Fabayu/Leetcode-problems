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


// Single Stack

//Go left left left and then right right right then print root
//push into stack the print one then print
class Solution {
public:
   
    vector<int> postorderTraversal(TreeNode* root) {
       
        
        
        
        
        
        
        
        
        
        
        stack<TreeNode*>st;
        TreeNode *curr=root;
        vector<int>v;
        while(curr!=NULL||st.size()!=0){
            if(curr!=NULL){
                st.push(curr);
                curr=curr->left;
            }
            else{
                TreeNode *temp=st.top()->right;
                if(temp==NULL){
                    temp=st.top();
                    st.pop();
                    v.push_back(temp->val);
                    while(st.size()!=0&&st.top()->right==temp){
                        temp=st.top();
                        v.push_back(temp->val);
                        st.pop();
                    }
                }
                else{
                    curr=temp;
                }
            }
        }
        return v;
    }
};

























// //Recursive 
// class Solution {
// public:
//     void helper(vector<int> &ans,TreeNode* root){
//         if(root==NULL)return ;
//         helper(ans,root->left);
//         helper(ans,root->right);
//         ans.push_back(root->val);
        
//     }
//     vector<int> postorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         helper(ans,root);
//         return ans;
//     }
// };
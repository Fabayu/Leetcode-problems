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
    vector<int> preorderTraversal(TreeNode* root) {
           vector<int> res;
        if (root == NULL)
			return res;
        stack<TreeNode*> st;  //making stack of TreeNode type 
        TreeNode* curr = root;
        while (!st.empty() || curr) {
            while (curr) {
                res.push_back(curr->val);  //curr in vector
                if (curr->right)
                    st.push(curr->right);    //push curr->right in stack
                curr=curr->left;               
                }
            if (!st.empty()) {             //Leaf Node occurs so popping out the right child
                curr = st.top();
                st.pop();
                }
            }
        return res;
    }
    
};
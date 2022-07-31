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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int> > result;
        vector<TreeNode*> st;
        TreeNode *pre = NULL, *cur = root;
        int value = 0;
        while (cur || !st.empty()) {
            while (cur) {
                st.push_back(cur);
                value += cur->val;
                cur = cur->left;
            }
            cur = st.back();
            if (!cur->left && !cur->right && value == sum) {
                vector<int> t;
                for (auto i : st) {
                    t.push_back(i->val);
                }
                result.push_back(t);
            }
            if (cur->right && cur->right != pre) {
                cur = cur->right;
            } else {
                pre = cur;
                value -= cur->val;
                st.pop_back();
                cur = NULL;
            }
        }
        return result;
    }
};
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
    
    vector<TreeNode*> go(int start, int end)
    {
        vector<TreeNode*>root;
        if(start>end) {
            root.push_back(NULL);
            return root;
        }
        
        // at a node we want all the left subtree list and right subtree list 
        // and than want to join them
        
        for(int currroot=start; currroot<=end; currroot++) {
        
            vector<TreeNode*>left_tree = go(start,currroot-1);
            vector<TreeNode*>right_tree = go(currroot+1,end);

            //now for the curr root generate all the lists
            for(auto l: left_tree) {
                for(auto r: right_tree) {
                    
                    TreeNode* currsubtree = new TreeNode(currroot);
                    currsubtree->left =l;
                    currsubtree->right =r;
                    root.push_back(currsubtree);
                }
            }
            
        }
         return root;
        
    }
    
    
    vector<TreeNode*> generateTrees(int n) {
         if (n == 0) 
            return vector<TreeNode*>();
        return go(1,n);
        
    }
};    
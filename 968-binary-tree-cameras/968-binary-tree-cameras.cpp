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
 string helper(TreeNode* root, int &ans){
        /* Performers:- 
            1) Dad -> playing as Root
            2) Children -> Left and right Nodes
        */
        
        
        /* Well there's no dad, so there are no children, so there is no need of camera as well */
        if(root==nullptr){
            return "noNeedCamera"; 
        }
        
        /* Dad went to understand the whole sitation*/
        string L=helper(root->left,ans);
        string R=helper(root->right,ans);
        
        
        /* Dad returned home and now has complete information */ 
        
        
        /* if left or right, anyone needs help, daddy got to have his camera on him 
           and hence we increment ans, and return hasCamera i.e. daddy got his camera 
           to save his children.  */
        if(L=="plz_cover_me" || R=="plz_cover_me"){
            ans++;
            return "hasCamera";
        }
        
        /* if left or right, anyone got camera on him, then daddy node is safe since he 
           is under either one of his children survelliance and hence we return that daddy
           do not need camera on Him, since his children are keeping him safe */ 
        else if(L=="hasCamera" || R=="hasCamera"){
            return "noNeedCamera";
        }
        
        /* Shit got real, both children kicked dad outta their safety and now dad got to ask 
           someone to protect him, so he is begging please protect me */
        return "plz_cover_me";
    }
    int minCameraCover(TreeNode* root) {
        int ans=0;
        if(helper(root,ans)=="plz_cover_me"){
            //If dad is still not under protection, somebody give this man a camera
            ans++;
        }
        return ans;

        
    }
};
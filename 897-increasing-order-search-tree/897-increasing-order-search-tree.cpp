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
    TreeNode* addtodummy(TreeNode* root, TreeNode* dummy) {
        if(root==NULL) return dummy;
        dummy = addtodummy(root->left, dummy);
        dummy->right = root;
        root->left = NULL;
        dummy = root;
        return addtodummy(root->right, dummy);
        
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* ans =  new TreeNode(0);
        TreeNode* dummy = ans;
        addtodummy(root,dummy);
        return ans->right;
    }
};
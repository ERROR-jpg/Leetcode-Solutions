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
    TreeNode *first = NULL;
    TreeNode *second = NULL;
    TreeNode *previous;
    void recoverTree(TreeNode* root) {
        previous = new TreeNode(INT_MIN);
        inorder(root);
        swap(first->val, second->val);
        
    }
    
    void inorder(TreeNode*root){
        if(root==NULL) return;
        
        
        inorder(root->left);
        
        if(first == NULL && root->val < previous->val)
            first = previous;
        if(first != NULL && root->val < previous->val)
            second = root;
        
        previous = root;
        
        inorder(root->right);
        
    }
};
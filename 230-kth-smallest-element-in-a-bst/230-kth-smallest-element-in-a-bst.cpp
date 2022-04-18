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
void traverse(vector<int>&inorder, TreeNode * root){
    if(root == nullptr){
        return;
    }
    
    traverse(inorder, root->left);
    inorder.push_back(root->val);
    traverse(inorder, root->right);
    
}
    
    int kthSmallest(TreeNode* root, int k) {
        vector<int> inorder;
        int ans;
        traverse(inorder, root);
        sort(inorder.begin(), inorder.end());
        ans = inorder[k-1];
        
        return ans;
    }
};
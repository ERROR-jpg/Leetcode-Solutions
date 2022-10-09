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
    
    void tovector(TreeNode* node, vector<int>& nums)
{
        
    if (node == NULL)
        return;
 
    /* first recur on left child */
    tovector(node->left, nums);
 
    /* then print the data of node */
    nums.push_back(node->val);
 
    /* now recur on right child */
   tovector(node->right, nums);
        
        
}
 
    
    bool findTarget(TreeNode* root, int target) {
        vector<int> nums;
         tovector(root, nums);
        
        
        
         map<int,int> prev;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            int diff=target-nums[i];
            
            if(prev.find(diff)!=prev.end())
                return true;
            
            prev[nums[i]]=i;
        }
        
        return false;
        
    }
};
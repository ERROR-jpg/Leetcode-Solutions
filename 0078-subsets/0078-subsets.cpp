class Solution {
public:
    void helper(int ind, vector<int>&ds, vector<int>&arr, int n, vector<vector<int>>&ans){
        if(ind==n){
            ans.push_back(ds);
            return;
        
        }
        
        ds.push_back(arr[ind]);
        helper(ind+1, ds, arr, n, ans);
        
        ds.pop_back();
        helper(ind+1, ds, arr, n, ans);
   
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ds;
        int n = nums.size();
        vector<vector<int>> ans;
        helper(0, ds, nums, n, ans);
     
        return ans;
    }
};
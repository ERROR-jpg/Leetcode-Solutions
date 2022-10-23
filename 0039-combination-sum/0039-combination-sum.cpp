class Solution {
public:
    void findCombinations(int ind, vector<int>&nums, vector<vector<int>>&ans, vector<int>&ds, int target){
        if(ind==nums.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(nums[ind]<=target){
            ds.push_back(nums[ind]);
            findCombinations(ind, nums,  ans, ds, target-nums[ind]);
            ds.pop_back();
        }
        
        findCombinations(ind+1, nums, ans, ds, target);
    }
    
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int>ds;
        findCombinations(0, nums, ans, ds, target);
        return ans;
    }
};
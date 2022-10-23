class Solution {
public:
    
    void findCombinations(int ind, vector<vector<int>>&ans,vector<int>&arr, vector<int>&ds, int target){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        
        for(int i =ind; i<arr.size(); i++){
            if(i>ind&&arr[i]==arr[i-1]) continue;
            if(arr[i]>target)break;
            ds.push_back(arr[i]);
            findCombinations(i+1, ans, arr,ds, target-arr[i]);
            ds.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());
        
        vector<vector<int>> ans;
        vector<int> ds;
        findCombinations(0, ans, arr, ds, target);
        return ans;
    }
};
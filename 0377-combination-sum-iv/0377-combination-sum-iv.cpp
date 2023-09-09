class Solution {
public:
    int n;
    int t[201][1001];
    
    int solve(int idx, vector<int>&nums, int tar){
        if(tar==0){
            return 1;
        }
        
        if(idx>=n || tar<0){
            return 0;
        }
        
        if(t[idx][tar]!= -1){
            return t[idx][tar];
        }
        
        int take_idx = solve(0, nums, tar-nums[idx]);
        int not_idx = solve(idx+1, nums, tar);
        
        return t[idx][tar]= take_idx + not_idx;
    }
    
    
    int combinationSum4(vector<int>& nums, int target) {
        n=nums.size();
        memset(t, -1, sizeof(t));
        return solve(0, nums, target);
    }
};
class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> ans(nums.size(), 0);
        
        int even_sum = 0;
        for(int val : nums){
            if(val%2==0){
                even_sum+=val;
            }
        }
        
        for(int i =0; i<queries.size(); i++){
            int ind = queries[i][1];
            int val= queries[i][0];
            
            if(nums[ind]%2==0){
                even_sum -= nums[ind];
            }
            
            nums[ind] += val;
            
            if(nums[ind]%2==0){
                even_sum+=nums[ind];
            }
            ans[i] = even_sum;
        }
        
        return ans;
    }
};
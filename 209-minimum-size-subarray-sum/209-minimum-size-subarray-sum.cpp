class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int min_len = INT_MAX;
        int j = 0;
        
        for(int i = 0; i<nums.size();i++){
            sum+=nums[i];
            if(sum>=target){
                while(sum>=target && j<=i){ 
                 min_len = min(min_len, i-j+1);
                    sum -= nums[j++];
                }
                
            }
            
        }
        
       return min_len == INT_MAX ? 0 : min_len;

    }
};
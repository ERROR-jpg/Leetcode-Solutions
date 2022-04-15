class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = INT_MIN;
        int i = 0, j = 0;
        int n = nums.size();
        while(i<n){
            int sum = 0;
            while(j<n){
                sum += nums[j];
                if(sum>max) max = sum;
                if(nums[j]>sum) break;
                else j++;
            }
            i = j;
        }
        return max;
    }
};
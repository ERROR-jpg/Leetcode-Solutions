class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int res = 1, start =0, end=0;

        long sum = 0;

        sort(nums.begin(), nums.end());

        while(end<nums.size()){
            sum+=nums[end++];
    
            if(k+sum < ((long)nums[end-1]*(end-start))){
               
                sum -= nums[start++];
            }
            res = max(res, end-start);
        }
        return res;
    }
};



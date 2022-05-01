class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int lsum=0, sum =0;
        for(auto n:nums){
            sum+=n;
        }
        for(int i = 0; i<nums.size();i++){
            sum = sum-nums[i];
            if(lsum==sum){
                return i;
            }
            lsum+=nums[i];
        }
        return -1;
    }
};
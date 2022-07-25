class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxindex = max_element(nums.begin(), nums.end()) - nums.begin();
        int maxnum = *max_element(nums.begin(), nums.end());
        sort(nums.begin(),nums.end());
        nums.pop_back();
        for(int i =0; i<nums.size();i++){
            if(maxnum<nums[i]*2)
                return -1;
        }
        return maxindex;
    }
};
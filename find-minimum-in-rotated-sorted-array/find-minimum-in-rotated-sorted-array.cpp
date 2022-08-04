class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        if(nums[0]<nums.back()) return nums[0];
        int ans = INT_MAX;
        int small = 0, end= nums.size()-1;
        
        while(small<=end){
            int mid = small+(end-small)/2;
            if(nums[mid]>=nums[0]){
                small=mid+1;
            }else{
                ans=min(ans, nums[mid]);
                    end = mid-1;
            }
        }
        return ans;
    }
};
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // if(nums[nums.size()-1]<target) return nums.size();
        int start = 0;
        int end = nums.size()-1;
        
        while(start<=end){
            int mid = start+(end-start)/2;
            
            if(nums[mid]==target)
                return mid;
            else if (nums[mid]<target)
                start = mid+1;
            else
                end = mid-1;
        }
        return start;
    }
};
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        if(nums.size()==0) {
            ans.push_back(-1);
            ans.push_back(-1);
        return ans;
        }
        int low = 0; int high=nums.size()-1;

        
        while(low<high){
            int mid=low+(high-low)/2;
            if(nums[mid]<target) low=mid+1;
            else high = mid;
        }
        if(nums[low]!=target){
            ans.push_back(-1);
        }
        
        if(ans.size()!=1){
        ans.push_back(low);
        }
        
        high = nums.size()-1;
        while(low<high){
            int mid= (low+(high-low)/2)+1;
            if(nums[mid]>target) high= mid-1;
            else low=mid;
        }
        if(nums[high]!=target) ans.push_back(-1);
        
         if(ans.size()!=2){
        ans.push_back(high);
         }
        return ans;
    }
};
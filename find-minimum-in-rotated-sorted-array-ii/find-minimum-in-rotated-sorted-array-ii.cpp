class Solution {
public:
    int findMin(vector<int>& nums) {
        // if(nums.size()==1)return nums[0];
        // if(nums[0]<nums.back()) return nums[0];
        // if(nums[0]==nums[nums.size()-1]) return nums[0];
        int small = 0, end= nums.size()-1;
        
        while(small<end){
            int mid = small+(end-small)/2;
            
            if( nums[mid]==nums[end]){
                end = end-1;
            }else if(nums[mid]<nums[end]){
                end=mid;
            }else{
              small=mid+1;  
            }
            
        }
        return nums[small];
    }
};
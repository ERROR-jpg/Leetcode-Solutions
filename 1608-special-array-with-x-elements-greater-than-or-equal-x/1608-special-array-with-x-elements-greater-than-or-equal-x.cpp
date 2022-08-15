class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        
        for(int i =0; i<=n;i++){
            int temp  =n;
            int low =0;
            int high = n-1;
            while(high>=low){
                int mid = low+(high-low)/2;
                if(nums[mid]>=i){
                    temp = mid;
                    high = mid-1;
                }
                else low = mid+1;
            }
            if((n-temp)==i) return i ;
        }
        return -1;
    }
};
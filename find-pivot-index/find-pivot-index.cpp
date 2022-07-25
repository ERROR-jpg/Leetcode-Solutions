class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       long long sum=0;
        
        for(int i=0; i<nums.size();i++)
            sum+=nums[i];
        
        long long lsum=0;
        long long rsum=sum;
        
        for(int i=0;i<nums.size();i++){
            rsum-=nums[i];
            
            if(lsum==rsum)
                return i;
            
            lsum+=nums[i];
        }
        
        return -1;
    }
};
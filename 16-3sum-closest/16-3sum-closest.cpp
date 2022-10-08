class Solution {
public:
    int threeSumClosest(vector<int>& arr, int target) {
         vector<int> nums(arr.begin(), arr.end());
        

         sort(nums.begin(), nums.end());
        int result = nums[0]+nums[1]+nums[nums.size()-1];
        
        for(int i =0; i<nums.size()-2;i++){
            int p1 = i+1;
            int p2 = nums.size()-1;
            
            while(p1<p2){
                int currentsum = nums[i]+nums[p1]+nums[p2];
                
                if(currentsum>target){
                    p2 -=1;
                }else {
                    p1+=1;
                }
                
                if(abs(currentsum-target) <abs(result-target)){
                    result = currentsum;
                }
            }
        }
        return result;
    }
};
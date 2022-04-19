class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       int res  =  0;
        int maxo  = INT_MIN;
        int n = nums.size();
        int j = 0;
        int cnt = 0;
        for(int i = 0; i<n;i++){
            if(nums[i]==0) k --;
            while(k<0){
                res--;
                if(nums[j]==0)
                    k++;
                j++;
            }

            
            
            res++;
            maxo = max(res, maxo);
        }
             return maxo;    
        }
       
    };


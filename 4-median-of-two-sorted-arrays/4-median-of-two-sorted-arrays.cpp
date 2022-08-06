class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        
        for(int i =0; i<nums1.size();i++){
            ans.push_back(nums1[i]);
        }
        for(int i =0; i<nums2.size();i++){
            ans.push_back(nums2[i]);
        }
        sort(ans.begin(),ans.end());
        int size = ans.size();
        int left = 0;
        int right = size-1;
        int mid = left+right/2;
        if((size)%2!=0){
            return ans[mid];
        }
        else{
            float a = ans[mid];
            float b = ans[mid+1];
            float res = (a+b)/2;
            return res;
        }
    }
  
};
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0; i<n; i++){
            nums1[m+i] = nums2[i];
        }
        
        int gap = (n+m)%2==0 ? (n+m)/2:((n+m)/2)+1;
        
        while(gap>0){
            for(int i=0; i<n+m-gap;i++){
                if(nums1[i]>nums1[i+gap]){
                    swap(nums1[i], nums1[i+gap]);
                }
            }
            gap = gap>1 ? gap%2==0 ? gap/2:(gap+1)/2:gap/2;
        }
return;        
    }
};
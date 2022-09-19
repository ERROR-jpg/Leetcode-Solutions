class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(nums2.empty()) return;
        int i =0;
        
        for(i=m; i<m+n;i++){
            nums1[i]=nums2[i-m];
        }
        sort(nums1.begin(), nums1.end());
        return;
    }
};
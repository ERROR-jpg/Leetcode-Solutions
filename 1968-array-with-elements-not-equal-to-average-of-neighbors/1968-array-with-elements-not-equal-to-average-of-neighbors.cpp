class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        sort(nums.begin(),  nums.end());
        vector<int> res;
        int l=0;
        int r = nums.size()-1;
        
        while(res.size()!=nums.size()){
            res.push_back(nums[l]);
                l++;
            if(l<=r){
                res.push_back(nums[r]);
                r--;
            }
        }
        return res;
    }
};
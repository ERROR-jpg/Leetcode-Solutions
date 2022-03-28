class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> sq;
        int s;
       for(int i = 0; i<nums.size();i++){
           s=0;
           s=nums[i]*nums[i];
           sq.push_back(s);
       }
        sort(sq.begin(), sq.end());
        return sq;
    }
};
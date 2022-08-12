class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
          map<int, int> mp;
        int res = 0;
        for(int i : nums){
            res += mp[i]++;
        }
        return res;
    }
};
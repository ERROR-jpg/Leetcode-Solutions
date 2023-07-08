class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> result;
        
        for(int i =0; i< nums.size(); i++){
            int comp = target- nums[i];
            if(mp.find(comp)!=mp.end()){
                result.push_back(mp[comp]);
                result.push_back(i);
                break;
            }else{
                mp.insert({nums[i], i});
            }
        }
        return result;
    }
};
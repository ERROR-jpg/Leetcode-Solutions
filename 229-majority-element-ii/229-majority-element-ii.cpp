class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> ans;
         int n = nums.size();
        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }

        int k = n/3;
        
        for(auto i:mp){
            int check = i.second;
            if(check>k)
                ans.push_back(i.first);
        }
        
        sort(ans.begin(), ans.end());
        
        return ans;
    }
};
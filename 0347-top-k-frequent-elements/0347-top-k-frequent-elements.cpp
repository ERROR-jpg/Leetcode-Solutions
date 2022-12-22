class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minh;
        vector<int> ans;
        for(auto it : nums){
            mp[it]++;
        }
        
        for(auto i : mp){
            minh.push({i.second, i.first});
        }
        
        while(minh.size()>k){
            minh.pop();
        }
        while(!minh.empty()){
            ans.push_back(minh.top().second);
            minh.pop();
        }
        
        return ans;
    }
};
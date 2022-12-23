class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int> ans;
        priority_queue<pair<int, int>> maxh;
        unordered_map<int, int> mp;
        
        for(auto i : nums){
            mp[i]++;
        }
        
        for(auto it : mp){
            maxh.push({-1 * it.second, it.first});
        }
        
        while(!maxh.empty()){
            int freq = -1 * maxh.top().first;
            int ele = maxh.top().second;
            
            for(int i =0; i<freq; i++){
                ans.push_back(ele);
            }
            maxh.pop();
        }
        
        return ans;
    }
};
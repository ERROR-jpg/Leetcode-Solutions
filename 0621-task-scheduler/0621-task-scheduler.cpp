class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> mp;
        int mx = INT_MIN;
        for(int c : tasks){
            mp[c]++;
            mx = max(mx, mp[c]);
        }
        int ans = (mx - 1) * (n+1);
        for(auto it : mp){
            if(it.second == mx)
                ans++;
            
        }
        
        ans = max(ans, (int)tasks.size());
        
        return ans;
    }
};
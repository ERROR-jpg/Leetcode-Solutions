class Solution {
public:
    int numJewelsInStones(string j, string s) {
        int cnt = 0;
        unordered_map<int, int> mp;
        
        for(char c : j){
            mp[c]++;
        }
        for(char c : s){
            if(mp.find(c)!=mp.end()) cnt++;
        }
        return cnt;
    }
};
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        unordered_map<char, int> mp, mp2;
        int i =0, j=0, n = s.size();
        for(auto &x : p){
            mp[x]++;
        }
        while(j<n){
            if(j-i+1<p.size()){
                mp2[s[j]]++;
                j++;
                continue;
            }
            mp2[s[j]]++;
            
            if(mp == mp2) ans.push_back(i);
            
            mp2[s[i]]--;
            if(mp2[s[i]]==0) mp2.erase(s[i]);
            
            i++, j++;
        }
        return ans;
    }
};
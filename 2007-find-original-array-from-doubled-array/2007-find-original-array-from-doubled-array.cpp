class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        if(changed.size()&1) return {};
        unordered_map<int, int> m;
        for(auto x:changed) m[x]++;;
        vector<int> ans;
        
        sort(changed.begin(), changed.end());
        
        changed.erase(unique(changed.begin(), changed.end()), changed.end());
        
        for(auto x:changed){
            if(m[x]>m[x*2]) return  {};
            for(int i=0; i<m[x];i++){
                ans.push_back(x);
                m[x*2]-=1;
            }
        }
        return ans;
    }
};
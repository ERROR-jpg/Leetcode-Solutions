class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int i =0;
        for(auto x: nums){
            if(mp.find(x)==mp.end()){
                mp[x]=i;
            }
            else{
                if(i-mp[x]<=k){
                    return true;
                }
                mp[x]=i;
            }
            i++;
        }
        return false;
    }
};
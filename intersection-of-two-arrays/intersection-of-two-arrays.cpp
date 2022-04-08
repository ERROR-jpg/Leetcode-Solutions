class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> i;
        unordered_set<int> s;
        unordered_set<int> s1;
        for(auto x : nums1){
            s.insert(x);
        }
        for(auto x : nums2){
            if(s.find(x)!=s.end()){
                s1.insert(x);
            }
        }
        for(auto x : s1){
            i.push_back(x);
        }
        return i;
    }
};
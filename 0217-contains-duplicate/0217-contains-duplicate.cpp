class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> st;
        
        for(int x : nums){
            st.insert(x);
        }
        if(st.size()!=nums.size()){
            return true;
        }
        return false;
    }
};
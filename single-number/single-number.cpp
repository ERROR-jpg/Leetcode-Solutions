class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> s;
        unordered_set<int> s1;
        for(auto x : nums){
            if(s.find(x)==s.end()){
                s.insert(x);
            }else{
                s1.insert(x);
            }
        }
        for(auto x : nums){
            if(s1.find(x)==s.end()){
                return x;
            }
        }
        return 0;
    }
};
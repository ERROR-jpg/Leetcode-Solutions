class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int initialsum =accumulate(nums.begin(), nums.end(), 0);
        
        set<int> s;
        for(auto &i:nums){
            s.insert(i);
        }
        
        int sum = accumulate(s.begin(), s.end(), 0);
        
        int repeated = initialsum-sum;
        
        int n = nums.size()+1;
        
        int missingnum = n*(n-1)/2 - sum;
        
        
        return{repeated, missingnum};
            
    }
};
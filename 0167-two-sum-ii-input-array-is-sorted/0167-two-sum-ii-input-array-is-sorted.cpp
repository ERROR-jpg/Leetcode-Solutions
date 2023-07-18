class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int r = numbers.size()-1;
        int l =0;
        int currsum;
        while(l<r){
             currsum = numbers[l] + numbers[r];
            if(currsum > target){
                r -= 1;
            }else if (currsum < target){
                l += 1;
            }else{
                return {l+1, r+1};
            }
        }
        return {};
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int low = 0;
        int high = num.size()-1;
        vector<int> ans;
        
        while(low<high){
           int mid = low + (high-low)/2;
            
            if((num[mid]+num[high]) == target){
                ans.push_back(mid+1);
                ans.push_back(high+1);
                return ans;
            }else if((num[mid]+num[low]) == target){
                ans.push_back(low+1);
                ans.push_back(mid+1);
                return ans;
            }else if((num[low]+num[high])==target){
                ans.push_back(low+1);
                ans.push_back(high+1);
                return ans;
            }else if((num[low]+num[high]>target)){
                high = high-1;
            }else{
                low = low+1;
            }
        }

        return ans;
    }
};
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int a =0;
        set<int>s(nums.begin(), nums.end());
        vector<int>n1(s.begin(), s.end());
        for(int i =0; i<n1.size();i++){
           if(n1.size()<3){
        return n1[n1.size()-1];
        }else{
        a = n1[n1.size()-3];
         }

        }
        return a;
    }
};
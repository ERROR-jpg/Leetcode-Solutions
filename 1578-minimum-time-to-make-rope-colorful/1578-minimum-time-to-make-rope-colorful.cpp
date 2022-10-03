class Solution {
public:
    int minCost(string s, vector<int>& time) {
        char c ='*';
        int timeprev =0;
        int ans =0;
        
        for(int i =0; i<s.size();i++){
            if(s[i]==c){
                if(timeprev<time[i]){
                    ans+=timeprev;
                    timeprev = time[i];
                }else{
                    ans+=time[i];
                }
            }else{
                c=s[i];
                timeprev=time[i];
            }
        }
        return ans;
    }
};
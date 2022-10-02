class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string ans= "";
        for(auto i : s){
            if(i=='('){
                if(count>0){
                    ans+= '(';
                }
                count++;
            }else{
                if(count>1){
                    ans+=')';
                }
                count--;
            }
        }
        return ans;
    }
};
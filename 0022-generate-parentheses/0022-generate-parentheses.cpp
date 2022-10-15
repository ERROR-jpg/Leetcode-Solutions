class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        paren(ans, "", n, 0);
        return ans;
    }
    
    void paren(vector<string>&ans,string s, int n, int m){
        if(n==0&&m==0){
            ans.push_back(s);
            return;
        }
        if(m>0){paren(ans,s+")", n, m-1);}
        if(n>0){paren(ans,s+"(", n-1, m+1);}

    }
};
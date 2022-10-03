class Solution {
public:
    int maxDepth(string s) {
        int depth = 0;
        int maxdepth = INT_MIN;
        
        for(int i =0; i<s.size();i++){
            if(s[i]=='(') depth++;
            else if(s[i]==')') depth--;
            maxdepth = max(maxdepth, depth);
        }
        return maxdepth;
    }
};
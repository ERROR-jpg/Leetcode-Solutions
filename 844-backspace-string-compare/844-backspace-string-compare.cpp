class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1;
        stack<char> t1;
        for(int i = 0;i<s.length();i++){
            if(!s1.empty()&&s[i]=='#')
                s1.pop();
            else if(s[i]!='#')
                s1.push(s[i]);
        }
        
        for(int i = 0;i<t.length();i++){
            if(!t1.empty()&&t[i]=='#')
                t1.pop();
            else if(t[i]!='#')
                t1.push(t[i]);
        }
        
        while(!s1.empty()&&!t1.empty()){
            if(s1.top()!=t1.top())
                return false;
            s1.pop();
            t1.pop();
        }
        
        if(!s1.empty())
            return false;
        if(!t1.empty())
            return false;
        
        return true;
        }
};
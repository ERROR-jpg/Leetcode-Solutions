class Solution {
public:
    int minDeletions(string s) {
        vector<int>a(26,0);
        int i=0,c=0,j=0,b=0,flag=0;
        for(i=0;i<s.size();i++)
            a[s[i]-'a']++;
        map<int,int>m;
        for(i=0;i<26;i++)
            if(a[i]>0)
            {
                if(m[a[i]]==0)
                    m[a[i]]++;
                else
                {
                    b=a[i];
                    while(b>=0)
                    {
                        if(m[b]==0)
                        {
                            flag=1;
                            break;
                        }
                        b--;
                    }
                    if(b>0) m[b]=1;
                    c+=a[i]-b;
                }
            }
        return c;
    }
};
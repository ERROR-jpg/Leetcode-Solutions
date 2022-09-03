class Solution {
public:
    
   bool ispalin(string &s, int a, int b){      //<-------------here in this function
        if(a>b)
            return true;
        if(s[a]==s[b])
            return ispalin(s,++a,--b); 
        else return false;
    }
    
    
    
    bool isPalindrome(string s) {
        
        string lol;
        for(int i=0;i<s.length();i++){
            if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9'))
                lol+=tolower(s[i]);
        }
        return ispalin(lol,0,lol.length()-1);
        
    }
};
class Solution {
public:
    
    array<int, 26> rep;
    
    int find(int x){
        if(rep[x]==x){
            return x;
        }
        return rep[x] = find(rep[x]);
    }
    
    
    void performUnion(int x, int y){
        x = find(x);
        y = find(y);
        
        if(x==y){
            return;
        }
        
        if(x<y){
            rep[y]=x;
        }else{
            rep[x]=y;
        }
    }
    
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        for(int i =0; i<26; i++){
            rep[i]=i;
        }
        
        for(int i=0; i<s1.size(); i++){
            performUnion(s1[i]-'a', s2[i]-'a');
        }
        string ans;
        
        for(char c:baseStr){
            ans+=(char)(find(c-'a')+'a');
        }
        
        return ans;
    }
};
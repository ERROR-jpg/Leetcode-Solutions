class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> mp;
        
        for(auto it:t){
            mp[it]++;
        }
        int size = INT_MAX;
        int answs, answe;
        int length = 0;
        string ans = "";
        
        int ws =0, count=mp.size();
        
        for(int we=ws;we<s.size();we++){
            if(mp.count(s[we])>0){
                mp[s[we]]--;
                if(mp[s[we]]==0) count--;
            }
            
            while(count==0){
                if(we-ws+1<size){
                    answs=ws;
                    answe=we;
                }
                size = min(size, we-ws+1);
                if(mp.count(s[ws])>0){
                    mp[s[ws]]++;
                    if(mp[s[ws]]==1) count++;
                }
                ws++;
            }
        }
        for(int i=answs;i<=answe;i++){
            ans+=s[i];
        }
        
        return ans;
    }
};
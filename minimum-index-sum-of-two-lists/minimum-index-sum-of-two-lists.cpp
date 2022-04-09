class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int>mp;
        
          for(int i=0;i<list2.size();i++){
            mp[list2[i]]=i;
        }
        vector<string> ans;
        int a = INT_MAX;
        for(int i =0; i<list1.size();i++){
            if(mp.find(list1[i])!=mp.end()&&(i+mp[list1[i]]<=a)){
                if(a!=i+mp[list1[i]]){
                    ans.clear();
                }
                a=i+mp[list1[i]];
                ans.push_back(list1[i]);
            }
        }
            return ans;
    }
};
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto a:arr){
            if(mp.find(2*a)!=mp.end()||(a%2==0)&&mp.find(a/2)!=mp.end()){
                return true;
            }
            mp[a]=1;
        }
        return false;
    }
};
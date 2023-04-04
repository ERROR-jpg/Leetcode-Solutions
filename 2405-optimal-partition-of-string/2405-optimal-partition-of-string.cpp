class Solution {
public:
    int partitionString(string s) {
        int ansss =1;
        set<int> ssss;
        
        for(auto itt : s){
            if(ssss.count(itt)){
                ssss.clear();
                ansss++;
            }
            ssss.insert(itt);
        }
        return ansss;
    }
};
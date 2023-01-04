class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int, int> freq;
        
        for(int i : tasks){
            freq[i]++;
        }
        
        int minm =0;
        
        for(auto [task, count] : freq){
            if(count == 1){
                return -1;
            }
            
            if(count%3==0){
                minm += count/3;
            }else{
                minm += count/3+1;
            }
        }
        return minm;
    }
};
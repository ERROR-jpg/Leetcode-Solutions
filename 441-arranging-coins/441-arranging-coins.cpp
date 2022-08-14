class Solution {
public:
    
    
    int arrangeCoins(int n) {
        
        if(n==1) return 1;
        long long i, j = 1, k = 1;
        
   
    vector<int>res;
    for (i = 1; i <= n; i++) {
        
        if (k>n)
            return res.size();
        res.push_back(k);
        
        j = j + 1; 
        k = k + j; 
        
    }
        return -1;
    }
};
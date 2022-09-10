class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        if (k == 0) return 0;
        
        vector<int> profit(k+1, 0);
        vector<int> cost(k+1, INT_MAX);
                
        for (int price: prices) {
            for (int i = 0; i < k; i++) {
                cost[i+1] = min(cost[i+1], price - profit[i]);
                profit[i+1] = max(profit[i+1], price - cost[i+1]);
            }
        }
        return profit[k];
    }
};
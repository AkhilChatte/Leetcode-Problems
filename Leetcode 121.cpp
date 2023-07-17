class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int profit = 0;
        int tempmin = prices[0];
        int sp = 0;
        for(int i=1; i<size; i++){
            tempmin = min(tempmin, prices[i]);
            sp = prices[i] - tempmin;
            profit = max(profit, sp);
        }
        return profit;
    }
};
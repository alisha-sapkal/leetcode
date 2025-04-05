class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(), profit = 0, cheap = prices[0];
        for (int i = 1; i < n; ++i) {
            if (prices[i] < cheap) {
                cheap = prices[i];
            } else {
                int prof = prices[i] - cheap;
                if (prof > profit)
                    profit = prof;
            }
        }
        return profit;
    }
};

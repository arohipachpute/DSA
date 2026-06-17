class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int max_right = 0;
       int max_profit = 0;
       int n = prices.size();
       for(int i = n-1; i >= 0; i--){
        max_right = max(max_right, prices[i]);
        max_profit = max(max_profit, max_right - prices[i]);
       } 
       return max_profit;
    }
};
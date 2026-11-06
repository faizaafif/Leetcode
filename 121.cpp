//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        int mincost = prices[0];
        for(int i = 1; i < n; i++){
            int prof = prices[i] - mincost;
            if(mincost > prices[i]){
                mincost = prices[i];
            }
            profit = max(profit, prof);
        } 
        return profit;
    }
};
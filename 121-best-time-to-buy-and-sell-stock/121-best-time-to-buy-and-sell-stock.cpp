class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini,profit,position;
        mini=INT_MAX;
        position=0;
        profit=0;
        for(int i=0;i<prices.size();i++){
            mini=min(prices[i],mini);
            position = prices[i]-mini;
            profit=max(position,profit);
        }return profit;
    }
};
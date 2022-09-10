class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int mini=INT_MAX;
        int profit=INT_MIN;
        
        for(int i=0;i<prices.size();i++){
            
            mini=min(prices[i],mini);
            profit=max(prices[i]-mini,profit);
            
        }return profit;
    }
};
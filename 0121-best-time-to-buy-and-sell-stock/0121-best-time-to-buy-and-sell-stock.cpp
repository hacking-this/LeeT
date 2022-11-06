class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        
        for(int i=0;i<prices.size();i++){
            mini = min(prices[i],mini);
            int proj_prof = prices[i]-mini;
            maxi = max(maxi,proj_prof);
        }
        return maxi;
    }
};
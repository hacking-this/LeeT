class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min,position,profit;
        min=INT_MAX;
        position=0;
        profit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min){
                min=prices[i];
            }
            position = prices[i]-min;
            if(profit<position){
                profit=position;
            }
    }return profit;
}
};
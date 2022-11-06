class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        
        for(int i:prices){
            mini = min(i,mini);
            int proj_prof = i-mini;
            maxi = max(maxi,proj_prof);
        }
        return maxi;
    }
};
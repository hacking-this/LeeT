class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        unordered_map<int,int> mpp;
        
        for(int n:nums) mpp[n]++;
        int ans;
        for(auto& x:mpp){
            if(x.second==1){
                ans=x.first;
            }
        }return ans;
        
    }
};
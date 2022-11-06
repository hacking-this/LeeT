class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int ans;
        
        for(int i=0;i<nums.size();i++) mpp[nums[i]]++;
        
        int count=0;
        
        for(auto x:mpp){
            if(count<x.second){
                count=x.second;
                ans=x.first;
            }
        }
        
        
        
        return ans;
    }
};
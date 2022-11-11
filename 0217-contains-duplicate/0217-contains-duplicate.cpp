class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        map<int,int> mpp;
        for(int x:nums) mpp[x]++;
        
        for(auto n:mpp)
            if(n.second>=2) return true;
        
        
        return false;
    }
};
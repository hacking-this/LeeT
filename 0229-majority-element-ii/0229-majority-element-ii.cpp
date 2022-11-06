class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i:nums) mpp[i]++;
        
        int n = nums.size();
        int thresh = n/3;
        vector<int> key;
        for(auto x:mpp){
            if(x.second>thresh){
                key.push_back(x.first);
            }
        }return key;
    }
};
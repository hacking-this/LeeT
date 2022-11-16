class Solution {
public:
    
    static bool cmp(pair<int,int>& c, pair<int,int>& d){
        return c.second>d.second;
    }
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        for(int x:nums) mpp[x]++;
        vector<pair<int,int>> a;
        vector<int> ans;
        
        for(auto& it:mpp) a.push_back(it);
        
        sort(a.begin(),a.end(),cmp);
        int i=0;
        for(auto& it:a){ 
            if(i<k){
                ans.push_back(it.first);
                i++;
            }
        }
        
        return ans;
    }
};
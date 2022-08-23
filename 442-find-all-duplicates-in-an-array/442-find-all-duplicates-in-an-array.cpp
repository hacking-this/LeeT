class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        set<int> a;
        int n = nums.size();
        vector<int> res;
        for(int i=0;i<n;i++){
            if(a.find(nums[i])!=a.end()){
                res.push_back(nums[i]);
            }else{
                 a.insert(nums[i]);
            }
        }return res;
        
    }
};
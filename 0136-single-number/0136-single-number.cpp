class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int ans;
        for(auto x:mpp){
            if(x.second==1){
                ans = x.first;
                break;
            }
        }return ans;
    }
};
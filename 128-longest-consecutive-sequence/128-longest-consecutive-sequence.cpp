class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!size(nums)) return 0;
        sort(nums.begin(),nums.end());
        int count=1;
        int maxi=0;
        int n=nums.size();
            for(int i=1;i<n;i++){
                if(nums[i-1] == nums[i]) continue;
                else if(nums[i]-nums[i-1]==1) count++;
                else{
                    maxi=max(maxi,count);
                    count=1;
            }
            }
        return max(maxi,count);
    }
};
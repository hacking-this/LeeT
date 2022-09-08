class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        vector<int> v1,v2;
        v1 = nums;
        sort(v1.begin(),v1.end());
        int l=0;
        int r=len-1;
        while(l<r){
            if (v1[l]+v1[r]==target){
                break;
            }
            else if (v1[l]+v1[r]>target) r--;
            else l++;  
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==v1[l]) v2.push_back(i);
            else if(nums[i]==v1[r]) v2.push_back(i);
        }
        
        return v2;
        
        
}
};
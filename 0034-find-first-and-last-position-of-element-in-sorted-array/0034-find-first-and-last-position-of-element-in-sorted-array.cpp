class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> ans(2,-1);
        int low = 0;
        int high = nums.size()-1;
        
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target){
                ans[0]=mid;
                //continue searching in left part
                high=mid-1;
            }else if(nums[mid]>target) high=mid-1;
            else low=mid+1;
        }
        
        low = 0;
        high = nums.size()-1;
        
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target){
                ans[1]=mid;
                //continue searching in right part
                low=mid+1;
            }else if(nums[mid]>target) high=mid-1;
            else low=mid+1;
        }
        return ans;
        
    }
};
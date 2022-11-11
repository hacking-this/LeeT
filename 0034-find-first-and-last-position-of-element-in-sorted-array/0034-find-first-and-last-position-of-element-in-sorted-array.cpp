class Solution {
public:
    
    int leftOccur(vector<int>& nums,int target, int low, int high){
        int ans = -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target){
                ans=mid;
                //continue searching in left part
                high=mid-1;
            }else if(nums[mid]>target) high=mid-1;
            else low=mid+1;
        }
        return ans;
    }
    
    int rightOccur(vector<int>& nums, int target, int low, int high){
        int ans = -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target){
                ans=mid;
                //continue searching in right part
                low=mid+1;
            }else if(nums[mid]>target) high=mid-1;
            else low=mid+1;
        }
        return ans;
    }
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> ans(2,-1);
        int low = 0;
        int high = nums.size()-1;
        int x = target;
        ans[0]=leftOccur(nums,x,low,high);
        ans[1]=rightOccur(nums,x,low,high);
        return ans;
        
    }
};
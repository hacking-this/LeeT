class Solution {
public:
    bool search(vector<int>& nums, int target) {
        bool flag = false;
        int high = nums.size()-1;
        int low = 0;
        while(low<=high){
            int mid = (low+high)/2;
            
            if(nums[mid]==target) {
                flag= true;
                break;
            }
            
            if((nums[low]==nums[mid])&&(nums[mid]==nums[high])){
                low++;
                high--;
            }
            
            else if(nums[low]<=nums[mid]){
                if(target>=nums[low] && target<=nums[mid]) high = mid-1;
                else low = mid + 1;
            }
            
            else{
                if(target>=nums[mid] && target<=nums[high]) low = mid+1;
                else high = mid-1;
            }
        }
        
        return flag;
    }
};
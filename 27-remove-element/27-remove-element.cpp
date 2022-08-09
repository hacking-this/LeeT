class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int start=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                continue;
            }else if(nums[i]!=val){
                nums[start]=nums[i];
                start++;
                count++;
            }
        }return count;
    }
};
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i,n;
        i=0;
        n=nums.size();
        for(int j=0;j<n;j++){
            if(nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
            }
        }
        
    }
};
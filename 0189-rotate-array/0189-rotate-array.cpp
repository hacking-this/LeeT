class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int rotate[n];
        for(int i=0;i<n;i++) rotate[i]=nums[i];
        for(int i=0;i<n;i++) nums[(i+k)%n]=rotate[i];
        
    }
};
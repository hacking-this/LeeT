class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int mul,mul2;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        mul=nums[n-3]*nums[n-2]*nums[n-1];
        mul2=nums[0]*nums[1]*nums[n-1];
        return max(mul,mul2);
    }
};
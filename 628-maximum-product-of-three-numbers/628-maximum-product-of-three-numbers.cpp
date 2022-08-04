class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int mul=1;
        int mul2;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        mul2=nums[0]*nums[1]*nums[n-1];
        for(int i=n-3;i<n;i++){
            int j=0;
            mul*=nums[i];
        }return max(mul,mul2);
    }
};
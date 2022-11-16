class Solution {
public:
    int number(int n){
        int count = 0;
        while(n>0){
            n/=10;
            count++;
        }
        return count;
    }
    int findNumbers(vector<int>& nums) {
        int result = 0;
        for(int i =0; i<nums.size();i++){
            if(number(nums[i])%2==0){
                result++;
            }
        }return result;
    }
};
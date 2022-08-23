class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());
        vector<int> arr(s.begin(), s.end());

        if(arr.size()>=3) return arr[arr.size()-3];
        return arr[arr.size()-1];
    }
};
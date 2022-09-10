class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // vector<int> prefix;
        // vector<int> suffix;
        // prefix.insert(prefix.begin(),1);
        // suffix.insert(suffix.end()-1,1);
        int n = nums.size();
        int prefix[n];
        prefix[0]=1;
        int suffix[n];
        suffix[n-1]=1;
        int resu[n];
        for(int i=1;i<n;i++) prefix[i]=prefix[i-1]*nums[i-1];
        for(int i=n-2;i>=0;i--) suffix[i]=suffix[i+1]*nums[i+1];
        for(int i=0;i<n;i++) resu[i]=prefix[i]*suffix[i];
        vector<int> res(resu,resu+n);
        return res;
        
        
    }
};
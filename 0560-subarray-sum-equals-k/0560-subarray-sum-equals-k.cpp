class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        
        int n = arr.size();
        int count = 0, sum=0;
        
        unordered_map<int,int> prevSum;
        
        for(int i=0;i<n;i++){
            sum+=arr[i];
            
            if(sum==k)
                count++;
            
            if(prevSum.find(sum-k)!=prevSum.end())
                count+=prevSum[sum-k];
            
            prevSum[sum]++;
        }return count;
    }
};
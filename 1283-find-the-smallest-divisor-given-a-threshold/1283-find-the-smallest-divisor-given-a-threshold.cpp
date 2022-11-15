class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int low = 1,ans=0 ,high=1000001;
        while(low<=high){
            
            int divisor = (low+high)/2;
            long long int sum=0;
            
             for(int i=0;i<nums.size();i++){
                 
                if(nums[i]%divisor==0){
                    sum+=(nums[i]/divisor);
                }
                 else{
                    sum+=(nums[i]/divisor)+1;
                }
                 
            }
            
            if(sum>threshold) low = divisor+1;
            else{
                ans = divisor;
                high = divisor-1;
            }
            
        }
        return ans;
    }
};
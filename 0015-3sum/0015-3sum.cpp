class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {\
        
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        
        for(int i=0;i<n-2;i++){
            if(i==0 || (i>0 && nums[i]!=nums[i-1])){
                
                int low=i+1, high=n-1, sum=0-nums[i];
                
                while(low<high){
                    if(nums[low]+nums[high]==sum){
                    
                    vector<int> pairs;
                    pairs.push_back(nums[i]);
                    pairs.push_back(nums[low]);
                    pairs.push_back(nums[high]);
                    ans.push_back(pairs);
                    
                    while(low<high && nums[low]==nums[low+1]) low++;
                    while(low<high && nums[high]==nums[high-1]) high--;
                    
                    low++;high--;
                    
                    }else if(nums[low]+nums[high]<sum) low++;
                    else high--;
                }
                
            }
        }return ans;
        
    }
};
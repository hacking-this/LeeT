class Solution {
public:
    int maxProduct(vector<int>& nums) {
         if (nums.empty()) return 0;
        int max_prod = 1;
        int min_prod = 1;
        int highest = INT_MIN;
        
        for(int n:nums){
            if(n<0) swap(max_prod,min_prod);
            
            max_prod = max(max_prod*n,n);
            min_prod = min(min_prod*n,n);
            
            highest = max(max_prod,highest);
        }
        
        return highest;
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj,cnt,n;
        maj = nums[0];
        cnt=1;
        n=nums.size();
        for(int i =0;i<n;i++){
            if(nums[i]==maj)
                cnt++;
            else{
                cnt--;
                if(cnt==0){
                    maj=nums[i];
                    cnt=1;
                }
            }
            
            
        }return maj;
    }
};
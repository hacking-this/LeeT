class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n,indx1,indx2;
        n=numbers.size();
        indx1=0;
        indx2=n-1;
        while(indx1<indx2){
            int sum=numbers[indx1]+numbers[indx2];
            if(sum==target){
                break;
            }else if(sum<target)
                indx1++;
            else
                indx2--;
                
        }return {indx1+1,indx2+1};
    }
};
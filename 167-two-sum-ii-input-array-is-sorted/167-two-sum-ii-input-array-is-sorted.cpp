class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n,indx1,indx2,a,b,sum;
        n=numbers.size();
        indx1=0;
        indx2=n-1;
        // int result[]=new int[2];
        while(indx1<indx2){
            sum=numbers[indx1]+numbers[indx2];
            if(sum==target){
                a=indx1+1;
                b=indx2+1;
                break;
            }else if(sum<target)
                indx1++;
            else
                indx2--;
                
        }return {a,b};
    }
};
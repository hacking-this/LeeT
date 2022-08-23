class Solution {
public:
    int mySqrt(int x) {
        long long int s=0,e=x,mid,ans;
        while(s<=e){
            mid=(s+e)/2;
            if(mid*mid==x) return mid;
            else if(mid*mid>x){
                e=mid-1;
                
            }else{
                s=mid+1;
                ans=mid;
            }
        }return ans;
    }
};
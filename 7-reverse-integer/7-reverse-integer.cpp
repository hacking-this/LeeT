class Solution {
public:
    int reverse(int x) {
        long long int last;
        long long int temp;
        long long int reverse;
        reverse=0;
        temp=x;
        while(abs(x)>0){
            last=x%10;
            x/=10;
            reverse=reverse*10+last;
        }
        if(reverse<INT_MIN || reverse>INT_MAX){
            return 0;
        }if(x>=0){
            return reverse;
        }else
            return -reverse;
    }
};
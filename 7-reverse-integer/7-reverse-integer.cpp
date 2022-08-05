class Solution {
public:
    int reverse(int x) {
        int last;
        int temp;
        long long int reverse;
        reverse=0;
        temp=x;
        while(abs(x)>0){
            reverse=reverse*10+x%10;
            x/=10;
        }
        if(reverse<INT_MIN || reverse>INT_MAX){
            return 0;
        }if(x>=0){
            return reverse;
        }else
            return -reverse;
    }
};
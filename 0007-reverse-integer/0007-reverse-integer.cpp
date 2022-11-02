class Solution {
public:
    int reverse(int x) {
        int temp = x;
        int last;
        long long int reverse = 0;
        while(abs(x)>0){
            last = x%10;
            reverse = reverse*10 + last;
            x/=10;
        }
        if(reverse < INT_MIN || reverse > INT_MAX) return 0;
        if(x>=0) return reverse;
        else return reverse;
    }
};
class Solution {
public:
    int fib(int n) {
        if(n<=1) return n;
        else{
            int last = fib(n-1);
            int s_last = fib(n-2);
            return last+s_last;
        }
    }
};
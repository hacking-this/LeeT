class Solution {
public:
    bool isPalindrome(int x) {
        int last;
        int temp=x;
        long long int reverse = 0;
        while(x>0){
            last=x%10;
            x/=10;
            reverse = reverse*10+last;
        }if(reverse==temp) return true;
        else return false;
        
    }
};
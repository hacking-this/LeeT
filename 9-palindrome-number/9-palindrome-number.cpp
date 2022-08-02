class Solution {
public:
    bool isPalindrome(int x) {
        long temp,last,num;
        bool flag=false;
        num=0;
        temp = x;
        while(x>0){
            last=x%10;
            num=num*10+last;
            x/=10;
            
        }if(num==temp)
            flag=true;
        return flag;
    }
};
class Solution {
public:
    bool isPalindrome(string s) {
        string a;
        for(int i=0;i<s.size();i++){
            if((s[i]>=48 && s[i]<=57)||(s[i]>=65 && s[i]<=90)||(s[i]>=97 && s[i]<=122)){
                a+=tolower(s[i]);
            }
        }int i=0, j=a.size()-1;
        while(i<j){
            if(a[i++]!=a[j--]) return false;
        }return true;
    }
};
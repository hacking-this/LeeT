class Solution {
public:
    bool isPalindrome(string s) {
        string a;
        for(int i=0;i<s.size();i++){
            if((s[i]>=48 && s[i]<=57)||(s[i]>=65 && s[i]<=90)||(s[i]>=97 && s[i]<=122)) a+=tolower(s[i]);
        }
        int l = 0;
        int r = a.size()-1;
        while(l<r){
            if(a[l++]!=a[r--]) return false;
        }return true;
    }
};
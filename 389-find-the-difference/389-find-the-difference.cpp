class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        char str;
        int len = t.size();
        int i=0;
        int j=0;
        while(j<len){
            if(s[i]==t[j]){
                str=t[j];
                j++;
                i++;
            }else if(s[i]!=t[j]) {
                str=t[j];
                break;
            }
        }return str;
    }
};
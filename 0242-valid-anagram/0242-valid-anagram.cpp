class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        bool flag = false;
        if(s.size()==t.size()){
            for(int i = 0;i<s.size();i++){
                if(s[i]==t[i]) flag=true;
                else {
                    flag = false;
                    break;
                }
            }
        }else{
            flag=false;
        }return flag;
        
    }
};
class Solution {
public:
    string removeOuterParentheses(string s) {
        string str;
        int opened=0;
        for(char c:s){
            if(c=='(' && opened++>0) str+=c;
            if(c==')' && opened-->1) str+=c;
        }
        return str;
    }
};
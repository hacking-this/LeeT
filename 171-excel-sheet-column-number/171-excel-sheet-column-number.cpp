class Solution {
public:
    int titleToNumber(string s) {
        int result=0;
        for(char c:s){
            int d = c+1-'A';
            result = result*26+d;
        }return result;
    }
};
class Solution {
public:
    int firstUniqChar(string s) {
        if(s.length()==1) return 0;
        unordered_map<char,int> mpp;
        for(char x:s) mpp[x]++;
        for(int i=0;i<s.length();i++){
            if(mpp[s[i]]==1) return i;
        }
        return -1;
        
    }
};
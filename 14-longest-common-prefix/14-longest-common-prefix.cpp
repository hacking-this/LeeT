class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string ans="";
        string first = strs.front();
        string last = strs.back();
        for(int i=0;i<first.length();i++){
            if (first[i]!=last[i]) break;
            else ans+=first[i];
        }
        return ans;
    }
};
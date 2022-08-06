class Solution {
public:
    int strStr(string s1, string s2) {
        int sol = -1;
        int j = 0;
        int n1 = s1.size(), n2 = s2.size();
        for (int i = 0; i < n1; i++) {
            if (s1[i] == s2[0]) {
                int temp = i, sol = i;
                j = 0;
                while (j < n2 && temp < n1 && s1[temp] == s2[j]) {
                    temp++;
                    j++;
                }
                if (j == n2) {
                    return sol;
                }
            }
            sol = -1;
        }  
        return sol;
        
    }
};
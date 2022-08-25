class Solution {
public:
    bool canConstruct(string ra, string ma) {
        int len = ra.length();
        int len2 = ma.length();
        sort(ra.begin(),ra.end());
        sort(ma.begin(),ma.end());
        string str="";
        int i=0;
        int j=0;
        while(i<=j && j<len2){
            if(ra[i]==ma[j]){
                str+=ma[j];
                i++;
                j++;
            }else{
                j++;
            }
        }if(str==ra) return true;
        else return false;
        
    }
};
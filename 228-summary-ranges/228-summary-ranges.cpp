class Solution {
public:
    vector<string> summaryRanges(vector<int>& num) {
        vector<string> r;
        string ans="";
        for(int i=0;i<num.size();i++){
            int j=i;
            while(j+1<num.size() && num[j]+1==num[j+1]) j++;
            if(j>i){
                ans+=to_string(num[i]);
                ans+="->";
                ans+=to_string(num[j]);
            }else{
                ans+=to_string(num[j]);
            }
            r.push_back(ans);
            ans="";
            i=j;
        }return r;
        
    }
};
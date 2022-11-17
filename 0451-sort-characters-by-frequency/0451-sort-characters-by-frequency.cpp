class Solution {
public:
    
    static bool cmp(pair<char,int>& a, pair<char,int>&b){
        return a.second>b.second;
    }
    
    string number(char a, int b){
        string c="";
        for(int i=0;i<b;i++){
            c+=a;
        }
        return c;
    }
    
    string frequencySort(string s) {
        unordered_map<char,int> mpp;
        for(auto i:s) mpp[i]++;
        
        vector<pair<char,int>> arr;
        for(auto x:mpp) arr.push_back(x);
        
        sort(arr.begin(),arr.end(),cmp);
        string str="";
        
        for(int i=0;i<arr.size();i++) {
            str+=(number(arr[i].first,arr[i].second));
        }
        
        return str;
                  
    }
                  
};
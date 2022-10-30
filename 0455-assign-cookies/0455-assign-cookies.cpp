class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        map<int,int> mp;
		for(auto &it: s){
			mp[it]++;
		}
		int count=0;
		for(auto &it: g){
		 //finding if there exist any cookie greater than or equal to child greed
			auto itr=mp.lower_bound(it);
			if(itr!=mp.end()){
				(*itr).second--;
				count++;
				if((*itr).second==0){
					mp.erase((*itr).first);
				}
			}
		}
		return count;
	
    }
};
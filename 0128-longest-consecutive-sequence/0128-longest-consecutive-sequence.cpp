class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        set<int> ans;
        for(int n:nums){
            ans.insert(n);
        }
        
        int longestStreak=0;
        
        for(int num:ans){
            if(!ans.count(num-1)){
                int currNum=num;
                int currStreak=1;
                
                while(ans.count(currNum+1)){
                    currNum+=1;
                    currStreak+=1;
                }
                
                longestStreak = max(longestStreak,currStreak);
            }
            
        }return longestStreak;
        
        
        
    }
};
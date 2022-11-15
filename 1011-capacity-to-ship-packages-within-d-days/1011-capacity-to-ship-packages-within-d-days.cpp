class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        
        int low=1, high = 25000000, cap=0;
        for(int j:weights) low=max(j,low);
        while(low<high){
            cap = (low+high)/2;
            int currload=0,day=1;
            for(int i=0;i<weights.size() && day<=days; currload+= weights[i++] ){ 
                
                if(currload+weights[i]>cap){
                    currload=0;
                    day++;
                }
                
            }
            if(day>days) low = cap+1;
            else high=cap;
        }
        return low;
    }
};
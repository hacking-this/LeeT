class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi=INT_MIN;
        int i=0;
        int j=height.size()-1;
        while(i<j){
            int width=j-i;
            int high=min(height[i],height[j]);
            int area=high*width;
            maxi=max(area,maxi);
            if(height[i] > height[j])
                j--;
            else
                i++;
        }return maxi;
        
    }
};
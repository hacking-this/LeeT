class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int i = 0;
        int j = n-1;
        bool flag = false;
        while(i<m){
            int low= 0;
            int high = n-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(matrix[i][mid]==target){
                    flag = true;
                    break;
                }else if(matrix[i][mid]>target) high=mid-1;
                else low=mid+1;
            }
            i++;
        }
        return flag;
    }
};
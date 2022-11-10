class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top = 0, bottom = matrix.size()-1, right = matrix[0].size()-1, left = 0;
        int direction = 1;
        vector<int> ans;
        while(top<=bottom && left<=right){
            
            if(direction==1){
                for(int i=left; i<=right; i++) ans.push_back(matrix[top][i]);
                top++;
                direction=2;
            }
            
            else if(direction==2){
                for(int i=top; i<=bottom; i++) ans.push_back(matrix[i][right]);
                right--;
                direction=3;
            }
            
            
            else if(direction==3){
                for(int i=right; i>=left; i--) ans.push_back(matrix[bottom][i]);
                bottom--;
                direction=4;
            }
            
            else if(direction=4){
                for(int i=bottom; i>=top; i--) ans.push_back(matrix[i][left]);
                left++;
                direction=1;
            }
            
        }
        return ans;
    }
};
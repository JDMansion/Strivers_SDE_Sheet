// Spiral Matrix    ( Leetcode : 54 )

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;

        int r = matrix.size();
        int c = matrix[0].size();

        int left = 0, right = c-1; 
        int top = 0, bottom = r-1;

        while(left <= right && top <= bottom) {

            //print left to right
            for(int j=left; j<=right; j++) {
                ans.push_back(matrix[top][j]);
            }
            top++;

            //print top to bottom
            for(int i=top; i<=bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;

            //print right to left
            if(top <= bottom) {
                for(int j=right; j>=left; j--) {
                    ans.push_back(matrix[bottom][j]);
                }
                bottom--;
            }

            //print bottom to top
            if(left <= right) {
                for(int i=bottom; i>=top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};

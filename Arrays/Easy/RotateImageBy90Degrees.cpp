// Rotate Image by 90 Degrees    ( Leetcode : 48 )

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();

        //transpose the matrix
        for(int i=0; i<r; i++) {
            for(int j=i; j<c; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        //reverse each row of the matrix
        for(int i=0; i<r; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

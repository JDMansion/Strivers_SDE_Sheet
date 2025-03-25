// Set Matrix Zeroes   ( Leetcode : 73 )

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();

        int col0 = 1;
        
        //Step 1:
        //traverse the matrix and mark first row and col accordingly
        for(int i=0; i<r; i++) {
            for(int j=0; j<c; j++) {
                if(matrix[i][j] == 0) {
                    // mark the ith row
                    matrix[i][0] = 0;

                    //mark jth col
                    if(j != 0) {
                        matrix[0][j] = 0;
                    }
                    else {
                        col0 = 0;
                    }
                }
            }
        }

        //Step 2:
        //Mark with 0 from (1,1) to (r-1)(c-1)
        for(int i=1; i<r; i++) {
            for(int j=1; j<c; j++) {
                if(matrix[i][j] != 0) {
                    //check for col and row
                    if(matrix[i][0] == 0 || matrix[0][j] == 0) {
                        matrix[i][j] = 0;
                    }
                }
            }
        }

        //Step 3:
        //Finally mark the 1st col and then 1st row
        if(matrix[0][0] == 0) {
            for(int j=0; j<c; j++) {
                matrix[0][j] = 0;
            }
        }
        if(col0 == 0) {
            for(int i=0; i<r; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};

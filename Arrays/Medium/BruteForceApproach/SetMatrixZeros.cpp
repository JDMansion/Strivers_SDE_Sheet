// Set Matrix Zeroes   ( Leetcode : 73 )


#include<bits/stdc++.h>
using namespace std;

void setRow(vector<vector<int>>& matrix, int r, int c, int i) {
    //set all the element of the row to -1, except 0
    for(int j=0; j<c; j++) {
        if(matrix[i][j] != 0) {
            matrix[i][j] = -1;
        }
    }
}

void setCol(vector<vector<int>>& matrix, int r, int c, int j) {
    //set all the element of the col to -1, except 0
    for(int i=0; i<r; i++) {
        if(matrix[i][j] != 0) {
            matrix[i][j] = -1;
        }
    }
}

vector<vector<int>> zeroMatrix(vector<vector<int>>& matrix) {
    int r = matrix.size();
    int c= matrix[0].size();

  //find where zeros are present, and replace the values of that row (i) and col (j) with -1 except the zeros
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            if(matrix[i][j] == 0) {
                setRow(matrix, r, c, i);
                setCol(matrix, r, c, j);
            }
        }
    }

  //finally replace all the -1 with value 0
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            if(matrix[i][j] == -1) {
                matrix[i][j] = 0;
            }
        }
    }

    return matrix;
}

int main() {
    vector<vector<int>> matrix = { {1,1,1,0}, {1,0,1,1}, {1,1,1,1}};
    vector<vector<int>> ans = zeroMatrix(matrix);

    for(int i=0; i<ans.size(); i++) {
        for(int j=0; j<ans[0].size(); j++) {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

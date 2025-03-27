// Rotate Image by 90 Degrees   ( Leetcode: 48 )
// Brute Force Approach
// Time Complexity : O(N*N)
// space Complexity : O(N*N)


#include<bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int>> matrix) {
    vector<vector<int>> ans(matrix.size(), vector<int> (matrix.size()));

    int r = matrix.size();
    int c = matrix[0].size();

    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            ans[j][r-i-1] = matrix[i][j];
        }
    }

    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    vector<vector<int>> matrix = { {1,2,3}, {4,5,6}, {7,8,9} };
    rotateMatrix(matrix);
}

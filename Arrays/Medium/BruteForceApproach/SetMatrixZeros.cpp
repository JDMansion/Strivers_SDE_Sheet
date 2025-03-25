#include<bits/stdc++.h>
using namespace std;

//Better Approach
vector<vector<int>> betterApproach(vector<vector<int>>& matrix) {
    int r = matrix.size();
    int c = matrix[0].size();

    int rowArray[r] = {0};
    int colArray[c] = {0};

    //mark the row and col array indexes to 1 with respect to 0 present in the matrix
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            if(matrix[i][j] == 0) {
                rowArray[i] = 1;
                colArray[j] = 1;
            }
        }
    }

    //Now iterate through each index of the matrix, and for any value of either i or j being 1, replace that index with value 0
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            if(rowArray[i] || colArray[j]) {
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
}


//Brute force 
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

    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            if(matrix[i][j] == 0) {
                setRow(matrix, r, c, i);
                setCol(matrix, r, c, j);
            }
        }
    }

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
    
    //Brute Force
    // vector<vector<int>> ans = zeroMatrix(matrix);

    //Better Approach
    vector<vector<int>> ans = betterApproach(matrix);

    for(int i=0; i<ans.size(); i++) {
        for(int j=0; j<ans[0].size(); j++) {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

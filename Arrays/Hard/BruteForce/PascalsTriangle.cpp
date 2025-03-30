// Pascal's Triangle
// Variation 1: Given row number r and column number c. Print the element at position (r, c) in Pascal’s triangle.

#include <bits/stdc++.h>
using namespace std;

// To find element at particular position we use formula : nCr
// here n = row - 1 ;  r = col - 1;

int findElementAtPosition(int row, int col) {
    int res = 1;
    
    for(int i=0; i<col; i++) {
        res = res * (row-i);
        res = res / (i+1);
    }
    return res;
}


int main() {
	int row = 6;
	int col = 2;
	
	cout<<findElementAtPosition(row-1, col-1);

}

// T.C = O(col)
// S.C = O(1)

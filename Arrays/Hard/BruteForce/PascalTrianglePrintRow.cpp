// Variation 2: Given the row number n. Print the n-th row of Pascal’s triangle.
// T.C = O(n)
// S.C = O(1)

#include <bits/stdc++.h>
using namespace std;

void printPascalTriangleRow(int rowNumber) {
    int ans = 1;
    
    cout<<ans<<" ";
    
    for(int i=1; i<rowNumber; i++) {
        ans = ans * (rowNumber-i);
        ans = ans / (i);
        cout<<ans<<" ";
    }
    
}

int main() {
    int rowNumber = 6;
    printPascalTriangleRow(rowNumber);

}

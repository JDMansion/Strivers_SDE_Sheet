// Left Rotate the Array by 1 place

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void leftRotatedByOne(int arr[], int n, int k) {
  int temp[n];

  for(int i=0; i<n; i++) {
    temp[(i+k) % n] = arr[i];
  }

  for(int i=0; i<n; i++) {
    cout<<temp[i]<<" ";
  }
}


int main() {
  int arr[] = {2, 4, 6, 8, 10};
  int n = sizeof(arr)/sizeof(int);
  
  int k = 1;

  leftRotatedByOne(arr, n, k);

}

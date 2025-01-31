// Second Largest Element in Array   ( GFG )


class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        int largestElement = INT_MIN;
        
        for(int i=0; i<arr.size(); i++) {
            if(arr[i] > largestElement) {
                largestElement = arr[i];
            }
        }
        
        int secondLargest = -1;
        
        for(int i=0; i<arr.size(); i++) {
            if(arr[i] > secondLargest && arr[i] != largestElement) {
                secondLargest = arr[i];
            }
        }
        return secondLargest;
    }
};

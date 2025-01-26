// Find Kth Rotation    ( GFG )

//Given an increasing sorted rotated array arr of distinct integers. The array is right-rotated k times. Find the value of k.


class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int start = 0;
        int end = arr.size() - 1;
        int ans = INT_MAX;
        int index = -1;
        
        while(start <= end) {
            int mid = start + (end - start)/2;
            
            //if array is sorted
            if(arr[start] <= arr[end]) {
                if(arr[start] < ans) {
                    ans = arr[start];
                    index = start;
                }
                break;
            }
            
            //left portion
            if(arr[start] <= arr[mid]) {
                if(arr[start] < ans) {
                    ans = arr[start];
                    index = start;
                }
                start = mid + 1;
            }
            //right portion
            else {
                if(arr[mid] < ans) {
                    ans = arr[mid];
                    index = mid;
                }
                end = mid - 1;
            }
        }
        return index;
    }
};

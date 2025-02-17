// Find the Kth Rotation  ( GFG )

class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        
        int n = arr.size();
        int start = 0;
        int end = n-1;
        int pivotIndex = -1;
        
        if(arr[start] < arr[end]) {    // array not rotated
            return 0;
        }
        
        while(start <= end) {
            int mid = start + (end - start)/2;
            
            if(mid+1 < n && arr[mid] > arr[mid+1]) return mid+1;
            else if(mid-1 >= 0 && arr[mid] < arr[mid-1]) return mid;
            
            else if(arr[mid] < arr[start]) end = mid - 1;
            
            else start = mid + 1;
        }
        
        return 0;
    }
};

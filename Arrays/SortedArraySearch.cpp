// Sorted Array Search   ( GFG )

class Solution {
  public:
    // Function to find element in sorted array
    // arr: input array
    // k: element to be searched
    bool searchInSorted(vector<int>& arr, int k) {

        int start = 0;
        int end = arr.size()-1;
        
        while(start <= end) {
            int mid = start + (mid - start)/2;
            
            if(arr[mid] == k) return true;
            
            else if(k > arr[mid]) start = mid + 1;
            
            else end = mid - 1;
        }
        return false;
    }
};

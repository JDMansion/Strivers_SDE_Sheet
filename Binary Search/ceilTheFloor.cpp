// Ceil the Floor  ( GFG )


class Solution {
  public:
  
    int findFloor(vector<int> &arr, int x) {
        int start = 0;
        int end = arr.size() - 1;
        int ans = -1;
        
        if(x < arr[start]) {
            return ans;
        }
        
        while(start <= end) {
            int mid = start + (end - start)/2;
            
            if(arr[mid] <= x) {
                ans = mid;
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return ans;
    }
    
    int findCeil(vector<int> &arr, int x) {
        int start = 0;
        int end = arr.size() - 1;
        int ans = -1;
        
        if(x > arr[end]) {
            return ans;
        }
        
        while(start <= end) {
            int mid = start + (end - start)/2;
            
            if(arr[mid] >= x) {
                ans = mid;
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        return ans;
    }
  
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        
        sort(arr.begin(), arr.end());
        
        
        int floor = findFloor(arr, x);
        int ceil = findCeil(arr, x);
        
        vector<int> ans;
        if(floor != -1) {
            ans.push_back(arr[floor]);
        }
        else {
            ans.push_back(-1);
        }
        if(ceil != -1) {
            ans.push_back(arr[ceil]);
        }
        else {
            ans.push_back(-1);
        }
        
        return ans;
    }
};

// Number of Occurances   ( GFG )

//Optimal Solution 
//Binary Search
class Solution {
  public:
  
    int firstOccurance(vector<int>& arr, int target) {
        int start = 0;
        int end = arr.size() - 1;
        int ans = -1;
        
        if(target < arr[start]) {
            return ans;
        }
        
        while(start <= end) { 
            int mid = start + (end - start)/2;
            
            if(arr[mid] == target) {
                ans = mid;
                end = mid - 1;
            }
            else if(target > arr[mid]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return ans;
    }
    
    int lastOccurance(vector<int>& arr, int target) {
        int start = 0;
        int end = arr.size() - 1;
        int ans = -1;
        
        if(target > arr[end]) {
            return ans;
        }
        
        while(start <= end) { 
            int mid = start + (end - start)/2;
            
            if(arr[mid] == target) {
                ans = mid;
                start = mid + 1;
            }
            else if(target > arr[mid]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return ans;
    }
  
    int countFreq(vector<int>& arr, int target) {
        int firstIndex = firstOccurance(arr, target);
        int lastIndex = lastOccurance(arr, target);
        
        if(firstIndex == -1 && lastIndex == -1) {
            return 0;
        }
        
        int totalOccurance = (lastIndex - firstIndex) + 1;
        
        return totalOccurance;
    }
};



//Brute Force
class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        int count = 0;
        
        for(int i=0; i<arr.size(); i++) {
            if(arr[i] == target) {
                count++;
            }
        }
        return count;
    }
};

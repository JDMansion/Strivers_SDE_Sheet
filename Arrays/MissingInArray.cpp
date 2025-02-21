// Missing in Array   ( GFG )

class Solution {
  public:
  
    int usingXORMethod(vector<int>& arr) {
        int ans = 0;
        int totalXOR = 0;
        int actualXOR = 0;
        
        int n = arr.size() + 1;  // n is the actual size 
        
        for(int i=1; i<=n; i++) {
            totalXOR ^= i;
        }
        
        for(int i=0; i<arr.size(); i++) {
            actualXOR ^= arr[i];
        }
        
        ans = totalXOR ^ actualXOR;
        return ans;
    }
    
    int usingSumMethod(vector<int>& arr) {
        long long actualSum = 0;
        int n = arr.size()+1;
        
        for(int i=0; i<arr.size(); i++) {
            actualSum += arr[i];    
        }
        
        long long totalSum = (long long)n*(n+1)/2;
        
        return (int)(totalSum - actualSum);
    }
  
    int missingNumber(vector<int>& arr) {
        
        return usingXORMethod(arr);
        
        // return usingSumMethod(arr);
    }
};

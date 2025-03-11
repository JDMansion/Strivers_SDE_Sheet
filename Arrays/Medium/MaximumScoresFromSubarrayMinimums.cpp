// Maximum Score from Subarray Minimums   ( GFG )


class Solution {
  public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr) {
        // Your code goes here
        
        int ans = INT_MIN;
        
        for(int i=0; i<arr.size()-1; i++) {
            int sum = arr[i] + arr[i+1];
            ans = max(sum, ans);
        }
        return ans;
    }
};

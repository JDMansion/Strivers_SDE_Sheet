// Longest Subarray with Sum k   ( GFG )

class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        map<int, int> preSumMap;
        int sum = 0;
        int maxLen = 0;
        
        for(int i=0; i<arr.size(); i++) {
            //calculate the prefix sum till i
            sum += arr[i];
            
            //if sum == k, update maxLen
            if(sum == k) 
                maxLen = max(maxLen, i+1);
            
            //calculate the sum of the remaining part, i.e. x-k
            int rem = sum - k;
            
            //calculate the length and update the maxLen
            if(preSumMap.find(rem) != preSumMap.end()) {
                int len = i - preSumMap[rem];
                maxLen = max(maxLen, len);
            }
            
            //finally update the map checking the conditions
            if(preSumMap.find(sum) == preSumMap.end()) {
                preSumMap[sum] = i;
            }
        }
        return maxLen;
    }
};

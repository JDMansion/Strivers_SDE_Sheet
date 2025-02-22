// Longest Subarray with Sum K    ( Coding Ninjas )


int longestSubarrayWithSumK(vector<int> arr, long long k) {
        int left = 0, right = 0;
        long long sum = arr[0];
        
        int maxLen = 0;
        int n = arr.size();
        
        while(right < n) {
            while(left <= right && sum > k) {
                sum -= arr[left];
                left ++;
            }
            
            if(sum == k) {
                maxLen = max(maxLen, right - left + 1);
            }
            right++;
            
            if(right < n) sum += arr[right];
        }
        return maxLen;
}

// Largest subarray with 0 sum   ( GFG )
// T.C = O(NlogN)
// S.C = O(N)

class Solution {
  public:
    int maxLen(vector<int>& arr) {
        unordered_map<int, int> hashmap;
        
        int sum = 0;
        int maxlen = 0;
        
        for(int i=0; i<arr.size(); i++) {
            sum += arr[i];
            
            if(sum == 0) {
                maxlen = max(maxlen, i+1);
            }
            
            else {
                if(hashmap.find(sum) != hashmap.end()) {
                    maxlen = max(maxlen, i - hashmap[sum]);
                }
                else {
                    hashmap[sum] = i;
                }
            }
        }
        return maxlen;
    }
};

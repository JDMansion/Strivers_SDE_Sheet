// Subarray Sum Equals K   ( Leetcode : 560 )

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> map;

        map[0] = 1;

        int preSum = 0;
        int cnt = 0;

        for(int i=0; i<nums.size(); i++) {
            preSum += nums[i];
            int remove = preSum - k;
            cnt += map[remove];
            map[preSum] += 1;
        }
        return cnt;
    }
};

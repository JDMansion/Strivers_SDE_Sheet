// Longest Consecutive Sequence   ( Leetcode: 128 )


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;

        int longest = 1;
        unordered_set<int> set;

        for(int i=0; i<n; i++) {
            set.insert(nums[i]);
        }

        for(int it : set) {
            //if it is the starting number
            if(set.find(it - 1) == set.end()) {
                int cnt = 1;
                int x = it;
                while(set.find(x + 1) != set.end()) {
                    x = x + 1;
                    cnt = cnt + 1;
                }
                longest = max(longest, cnt);
            }
        }
        return longest;
    }
};

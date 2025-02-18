// Max Consecutive Ones  ( Leetcode: 485 )


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int oneCount = 0;
        int ans = -1;

        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == 0) oneCount = 0;
            if(nums[i] == 1) oneCount++;

            if(oneCount > ans) ans = oneCount;
        }
        return ans;
    }
};

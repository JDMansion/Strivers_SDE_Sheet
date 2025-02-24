// Two Sum   ( Leetcode: 1 )


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> ans;

        for(int i=0; i<nums.size(); i++) {
            int x = nums[i];

            int numberNeeded = target - x;

            if(ans.find(numberNeeded) != ans.end()) {
                return {ans[numberNeeded], i};
            }

            ans[x] = i;
        }
        return {-1, -1};
    }
};

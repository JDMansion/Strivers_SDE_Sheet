// Two Sum   ( Leetcode: 1 )

// We can also use, unordered_map<> for this question. unordered_map is implemented using a hash map.
//Use unordered_map when you need fast average-case lookup, insertion, and deletion and when the order of elements is not important.

//map is typically implemented using a self-balancing binary search tree (usually a red-black tree).
//Use map when you need elements to be stored in sorted order or when you need to perform operations that rely on the sorted order of keys.

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

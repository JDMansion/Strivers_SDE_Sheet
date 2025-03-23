// Next Permutation   ( Leetcode : 31 )

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        //Step 1: Find the break point
        int index = -1;

        for(int i = n-2; i>=0; i--) {
            if(nums[i] < nums[i+1]) {
                index = i;
                break;
            }
        }

        // If break point does not exist 
        if(index == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        //Step 2: Find the next greater element and swap it with nums[index]
        for(int i = n-1; i>index; i--) {
            if(nums[i] > nums[index]) {
                swap(nums[i], nums[index]);
                break;
            }
        }

        //Step 3: reverse the right half
        reverse(nums.begin() + index + 1, nums.end());
    }
};

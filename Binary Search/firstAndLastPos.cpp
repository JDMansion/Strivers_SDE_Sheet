// Find First and Last Position in a Sorted Array   ( Leetcode - 34)

class Solution {
public:

    int findStartingPos(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int ans = -1;

        while(start <= end) {
            int mid = start + (end - start)/2;

            if(nums[mid] == target) {
                ans = mid;
                end = mid - 1;
            }
            else if(target > nums[mid]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return ans;
    }
 
    int findEndingPos(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int ans = -1;

        while(start <= end) {
            int mid = start + (end - start)/2;

            if(nums[mid] == target) {
                ans = mid;
                start = mid + 1;
            }
            else if(target > nums[mid]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;

        int startingPos = findStartingPos(nums, target);
        int endingPos = findEndingPos(nums, target);

        ans.push_back(startingPos);
        ans.push_back(endingPos);

        return ans;
    }
};

// Find minimum in a Rotated Sorted Array   ( Leetcode: 153 )

class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        int ans = INT_MAX;

        while(start <= end) {
            int mid = start + (end - start)/2;

            //if search space is already sorted 
            //then arr[start] will always be the smalles
            if(nums[start] <= nums[end]) {
                ans = min(ans, nums[start]);
                break;
            }

            //left is sorted
            if(nums[start] <= nums[mid]) {
                ans = min(ans, nums[start]);
                start = mid + 1;
            }
            //else right is sorted
            else {
                ans = min(ans, nums[mid]);
                end = mid - 1;
            }
        }
        return ans;
    }
};

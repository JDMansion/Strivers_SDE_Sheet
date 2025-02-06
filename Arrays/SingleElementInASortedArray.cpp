// Single Element in a Sorted Array    ( Leetcode : 540 )


class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int ans = -1;

        int start = 0;
        int end = n-1;

        while(start <= end) {
            int mid = start + (end - start)/2;

            //single element case
            if(start == end) return nums[start];

            //if mid index is odd
            if(mid % 2 != 0) {
                //left side 
                if(mid-1 >= 0 && nums[mid] == nums[mid-1]) {
                    start = mid + 1;
                }
                //right side
                else {
                    end = mid - 1;
                }
            }

            //if mid index is right
            else {
                //left side
                if(mid+1 < n && nums[mid] == nums[mid+1]) {
                    start = mid + 2;
                }
                //right side
                else {
                    end = mid;
                }
            }
        }

        return -1;
    }
};

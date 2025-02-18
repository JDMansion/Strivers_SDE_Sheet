//Missing number in an Array    ( Leetcode: 268 )


class Solution {
public:

    int mathsMethod(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();

        for(int i=0; i<nums.size(); i++) {
            sum += nums[i];
        }

        int totalSum = n*(n+1)/2;

        return totalSum - sum; 
    }

    int xorMethod(vector<int>& nums) {
        int actualXOR = 0;
        int currentXOR = 0;

        for(int i=1; i<=nums.size(); i++) {
            actualXOR ^= i;
        }

        for(int i=0; i<nums.size(); i++) {
            currentXOR ^= nums[i];
        }

        return actualXOR ^ currentXOR;
    }

    int missingNumber(vector<int>& nums) {
        //return mathsMethod(nums);
        return xorMethod(nums);
    }
};

// Longest Subarray with sum K     ( GFG )


#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>& nums, int k) {
    int longestSubarray = 0;
    for(int i=0; i<nums.size(); i++) {
        int sum = 0;
        for(int j=i; j<nums.size(); j++) {
            sum += nums[j];
            if(sum == k) {
                longestSubarray = max(longestSubarray, j-i+1);
            }
        }
    }
    return longestSubarray;
}

int main() {
    vector<int> nums = {10, -10, 20, 30};
    int k = 5;
    cout<<longestSubarray(nums, k);
}

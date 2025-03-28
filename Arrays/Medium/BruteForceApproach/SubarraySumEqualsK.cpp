// Subarray Sum Equals K   ( Leetcode : 560 )


#include<bits/stdc++.h>
using namespace std;

int findTotal(vector<int>& nums, int k) {
    int count = 0;

    for(int i=0; i<nums.size(); i++) {
        int sum = 0;
        for(int j=i; j<nums.size(); j++) {
            sum += nums[j];

            if(sum == k) count++;
        }
    }
    return count;
}

int main() {
    vector<int> nums = {1,2,-1,3,6,1,1};
    int k = 2;

    cout<<findTotal(nums, k);
}

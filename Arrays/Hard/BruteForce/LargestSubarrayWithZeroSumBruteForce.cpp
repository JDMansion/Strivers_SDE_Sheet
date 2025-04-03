// Largest Subarray with 0 Sum    ( GFG )
// T.C = O(N^2)
// S.C = O(1)

#include <bits/stdc++.h>
using namespace std;

int maxLen(vector<int> nums) {
    int count = 0;
    int maxLen = 0;
    
    for(int i=0; i<nums.size(); i++) {
        int sum = nums[i];
        for(int j=i+1; j<nums.size(); j++) {
            sum += nums[j];
            if(sum == 0) {
                maxLen = max(maxLen, j-i+1);
            }
        }
    }
    return maxLen;
}

int main() {
	vector<int> nums = {1, 0, -4, 3, 1, 0};
	cout<<maxLen(nums);
}

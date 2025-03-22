// Maximum Subarray   ( Kadane's Algorithm )
// Leetcode : 53
// Brute Force


#include <bits/stdc++.h>
using namespace std;

int maxSubarray(vector<int> nums) {
    int largest = INT_MIN;
    int startIndex = -1, endingIndex = -1;
    
    for(int i=0; i<nums.size(); i++) {
        int sum = nums[i];
        
        for(int j=i+1; j<nums.size(); j++) {
            sum += nums[j];
            
            if(sum >= largest) {
                largest = sum;
                startIndex = i;
                endingIndex = j;
            }
        }
    }
    
    for(int i = startIndex; i<= endingIndex; i++) {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return largest;
}

int main() {
	vector<int> nums = {1, 2, 3, -6, -2, 1, 6, 4};
	cout<<maxSubarray(nums)<<endl;
}

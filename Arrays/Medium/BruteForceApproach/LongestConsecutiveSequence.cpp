// Longest Consecutive Sequence   ( leetcode: 128 )


// Brute Force

#include <bits/stdc++.h>
using namespace std;

bool linearSearch(vector<int> nums, int target) {
    for(int i=0; i<nums.size(); i++) {
        if(nums[i] == target) return true;
    }
    return false;
}

int longestConsecutive(vector<int> nums) {
    int longest = 1;
    
    if(nums.size() == 0) return 0;
    
    for(int i=0; i<nums.size(); i++) {
        int x = nums[i];
        int cnt = 1;
        
        while(linearSearch(nums, x+1) == true) {
            cnt++;
            x++;
        }
        longest = max(longest, cnt);
    }
    return longest;
}

int main() {
	vector<int> nums = {45, 2, 2, 3, 3, 1, 1, 5, 6, 6, 4};
	cout << longestConsecutive(nums);

}

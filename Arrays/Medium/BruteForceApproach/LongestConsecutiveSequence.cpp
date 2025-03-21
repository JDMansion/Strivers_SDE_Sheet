// Longest Consecutive Sequence   ( leetcode: 128 )

#include <bits/stdc++.h>
using namespace std;

bool linearSearch(vector<int> nums, int target) {
    for(int i=0; i<nums.size(); i++) {
        if(nums[i] == target) return true;
    }
    return false;
}

//Using Sorting Approach.    
// TC. O(NlogN) + O(N)
int longestConsecutive1(vector<int> nums) {
    int longest = 1;
    int lastSmallest = INT_MIN;
    
    if(nums.size() == 0) return 0;
    
    sort(nums.begin(), nums.end());
    
    int cnt = 0;
    for(int i=0; i<nums.size(); i++) {
        if(lastSmallest + 1 == nums[i]) {
            lastSmallest = nums[i];
            cnt++;
        }
        else if(lastSmallest != nums[i]) {
            lastSmallest = nums[i];
            cnt = 1;
        }
        
        longest = max(longest, cnt);
    }
    return longest;
}

//Brute Force 
// O(N^2)
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

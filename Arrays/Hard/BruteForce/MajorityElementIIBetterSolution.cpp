// Majority Element   ( Leetcode : 229 )
// Better Solution 
// T.C = O(n)
// S.C = O(2) , worst case = O(n)

#include <bits/stdc++.h>
using namespace std;

// Better Approach 
vector<int> majorityElement(vector<int> nums) {
    map<int, int> map;
    vector<int> ans;
    int minValue = (nums.size()/3) + 1;
    
    for(int i=0; i<nums.size(); i++) {
        map[nums[i]]++;
        
        if(map[nums[i]] == minValue) ans.push_back(nums[i]);
    }
    return ans;
}

int main() {
	vector<int> nums = {3,1,3,2,2,3,2};
	
	vector<int> ans = majorityElement(nums);
	
	for(auto it: ans) {
	    cout<<it<<" ";
	}
}

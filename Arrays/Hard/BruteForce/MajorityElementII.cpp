// Majority Element 2     ( Leetcode : 229 )

// Brute Force Approach 
#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> nums) {
    vector<int> ans;
    int cond = nums.size() / 3;
    
    for(int i=0; i<nums.size(); i++) {
        if(ans.size() == 0 || ans[0] != nums[i]) {
            int x = nums[i];
            int cnt = 0;
            
            for(int j=0; j<nums.size(); j++) {
                if(nums[j] == x) cnt++;
            }
            if(cnt > cond) ans.push_back(x);
        }
        if(ans.size() > 2) break;
    }
    return ans;
}

int main() {
	vector<int> nums = {3,1,3};
	
	vector<int> ans = majorityElement(nums);
	
	for(auto it: ans) {
	    cout<<it<<" ";
	}
}

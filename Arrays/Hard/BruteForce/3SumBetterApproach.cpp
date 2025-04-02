// 3 Sum   ( Leetcode: 18 )
// T.C = O(N^3 * log(M)  (n=size of array , m=no. of elements in the set)
// S.C = O(2 * no. of quadrulets) + O(n)

//Better Approach
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int> nums, int target) {
    set<vector<int>> st;
    int n = nums.size();
    
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            set<int> hashSet;
            for(int k=j+1; k<n; k++) {
                int fourth = target - (nums[i] + nums[j] + nums[k]);
                if(hashSet.find(fourth) != hashSet.end()) {
                    vector<int> temp = {nums[i], nums[j], nums[k], fourth};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                hashSet.insert(nums[k]);
            }
        }
    }
    
    vector<vector<int>> ans (st.begin(), st.end());
    return ans;
}


int main() {
	vector<int> nums = {1,0,-1,0,-2,2};
	int target = 0;
	
	vector<vector<int>> ans = fourSum(nums, target);
	
	for(auto it : ans) {
	    for(auto i : it) {
	        cout<<i<<" ";
	    }
	    cout<<endl;
	}
}

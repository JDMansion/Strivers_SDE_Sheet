// 3 Sum   ( Leetcode: 15 )


//Better Solution
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> num) {
    set<vector<int>> st;
    
    for(int i=0; i<num.size(); i++) {
        set<int> hashset;
        for(int j=i+1; j<num.size(); j++) {
            int third = -(num[i] + num[j]);
            
            //find element in set
            if(hashset.find(third) != hashset.end()) {
                vector<int> temp = {num[i], num[j], third};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hashset.insert(num[j]);
        }
    }
    vector<vector<int>> ans (st.begin(), st.end());
    return ans;
}

int main() {
	vector<int> num = {-1,0,1,2,-1,-4};
	
	vector<vector<int>> ans = threeSum(num);
	
	for(auto it : ans) {
	    for(auto i : it) {
	        cout<<i<<" ";
	    }
	    cout<<endl;
	}

}

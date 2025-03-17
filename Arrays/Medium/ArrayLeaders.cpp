// Array Leaders   ( GFG )

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> ans;
        int n = arr.size();
        
        //last element is always the array leader in any array
        int max = arr[n-1];
        
        ans.push_back(max);
        
        for(int i=n-2; i>=0; i--) {
            if(arr[i] >= max) {
                ans.push_back(arr[i]);
                max = arr[i];
            }
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

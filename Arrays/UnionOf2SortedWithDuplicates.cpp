// Union of 2 Sorted Arrays with Duplicates   ( GFG )


class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {      
        int n = a.size();
        int m = b.size();
        
        vector<int> ans;
        
        int i = 0;
        int j = 0;
        
        while(i < n && j < m) {
            if(a[i] == b[j]) {
                if(ans.empty() || ans.back() != a[i]) {
                    ans.push_back(a[i]);
                }
                i++, j++;
            }
            
            else if(a[i] < b[j]) {
                if(ans.empty() || ans.back() != a[i]) {
                    ans.push_back(a[i]);
                }
                i++;
            }
            
            else {
                if(ans.empty() || ans.back() != b[j]) {
                    ans.push_back(b[j]);
                }
                j++;
            }
        }
        
        while (i < n) {
            if(ans.empty() || ans.back() != a[i]) {
                ans.push_back(a[i]);    
            }
            i++;
        }
        while (j < m) {
            if(ans.empty() || ans.back() != b[j]) {
                    ans.push_back(b[j]);
                }
            j++;
        }
        
        return ans;
    }
};

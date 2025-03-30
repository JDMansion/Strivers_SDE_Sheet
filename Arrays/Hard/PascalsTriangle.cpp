// Pascal's Triangle   ( Leetcode : 118 )
// The following sol is combination with the Version 2 
// T.C = O(n * n * r)   ~  O(n^3)     (n = no. of rows,  r = columns index)
// S.C = O(

class Solution {
public:

    vector<int> generateRow(int row) {
        vector<int> ans;
        int value = 1;
        ans.push_back(value);

        for(int i=1; i<row; i++) {
            value = value * (row - i);
            value = value / i;
            ans.push_back(value);
        }
        return ans;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1; i<=numRows; i++) {
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};

/*
Author : Vandana Kumari 
Date : 26/06/2024
Problem : Coverage of all Zeros in a Binary Matrix
Problem Link : https://www.geeksforgeeks.org/problems/coverage-of-all-zeros-in-a-binary-matrix4024/1
*/

//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int findCoverage(vector<vector<int>>& matrix) {
        // Code here
        int cnt = 0;
        int m = matrix.size(), n = matrix[0].size();
        
        auto checkAndCount = [&](int i, int j) {
            if (j < n - 1 && matrix[i][j + 1] == 1) ++cnt; // Right
            if (j > 0 && matrix[i][j - 1] == 1) ++cnt; // Left
            if (i < m - 1 && matrix[i + 1][j] == 1) ++cnt; // Down
            if (i > 0 && matrix[i - 1][j] == 1) ++cnt; // Up
        };

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (matrix[i][j] == 0) {
                    checkAndCount(i, j);
                }
            }
        }

        return cnt;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        Solution obj;
        int ans = obj.findCoverage(matrix);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
/*
Author : Vandana Kumari 
Date : 10/07/2024
Problem : Largest square formed in a matrix
Problem Link : https://www.geeksforgeeks.org/problems/largest-square-formed-in-a-matrix0806/1
*/

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maxSquare(int n, int m, vector<vector<int>> mat) {
        // code here
        vector<int> dp(m, 0);
        int maxsize = 0, prev = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int temp = dp[j];
                if (i == 0 || j == 0) {
                    dp[j] = mat[i][j];
                } else if (mat[i][j] == 1) {
                    dp[j] = min({ dp[j], dp[j - 1], prev }) + 1;
                } else {
                    dp[j] = 0;
                }
                maxsize = max(maxsize, dp[j]);
                prev = temp;
            }
        }
        return maxsize;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for (int i = 0; i < n * m; i++)
            cin >> mat[i / m][i % m];

        Solution ob;
        cout << ob.maxSquare(n, m, mat) << "\n";
    }
    return 0;
}
// } Driver Code Ends
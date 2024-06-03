/*
Author : Vandana Kumari 
Date : 03/06/2024
Problem : Trail of ones
Problem Link : https://www.geeksforgeeks.org/problems/trail-of-ones3242/1
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int numberOfConsecutiveOnes(int n) {
        // code here
        const long long MOD = 1'000'000'007;
        if (n == 1 || n == 2) {
            return 1;
        }
        long long a = 1, b = 1;
        long long res = 1;
        for (int i = 3; i <= n; i++) {
            long long c = (a + b) % MOD;
            a = b;
            b = c;
            res = (res * 2 + a) % MOD;
        }
        return (int)res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.numberOfConsecutiveOnes(N) << endl;
    }
    return 0;
}

// } Driver Code Ends
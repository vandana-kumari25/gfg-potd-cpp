/*
Author : Vandana Kumari 
Date : 07/09/2024
Problem : Nth Natural Number
Problem Link : https://www.geeksforgeeks.org/problems/nth-natural-number/1
*/

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long findNth(long long n) {
        // code here.
        long long base9num = 0;
        long long pos = 1;
        
        while (n > 0) {
            base9num += (n % 9) * pos;
            n /= 9;
            pos *= 10;
        }
        
        return base9num;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, ans;
        cin >> n;
        Solution obj;
        ans = obj.findNth(n);
        cout << ans << endl;
    }
}

// } Driver Code Ends
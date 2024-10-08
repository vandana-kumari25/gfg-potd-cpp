/*
Author : Vandana Kumari 
Date : 14/06/2024
Problem : Armstrong Numbers
Problem Link : https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1
*/

//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n) {
        // code here
        string ans = to_string(n);
        if((pow((ans[0]-'0'),3)+pow((ans[1]-'0'),3)+pow((ans[2]-'0'),3))==n) return "true";
        return "false";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends
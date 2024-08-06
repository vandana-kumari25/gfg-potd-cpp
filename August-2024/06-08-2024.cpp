/*
Author : Vandana Kumari 
Date : 06/08/2024
Problem : Validate an IP Address
Problem Link : https://www.geeksforgeeks.org/problems/validate-an-ip-address-1587115621/1
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int isValid(string str) {
        // code here
        int n = str.size();
        int segments = 0;
        int num = 0;
        int length = 0;

        for (int i = 0; i < n; ++i) {
            if (str[i] == '.') {
                if (length == 0 || length > 3 || num > 255) return 0;
                segments++;
                num = 0;
                length = 0;
            } else if (isdigit(str[i])) {
                if (length == 0 && str[i] == '0' && (i + 1 < n && str[i + 1] != '.')) return 0;
                num = num * 10 + (str[i] - '0');
                length++;
            } else {
                return 0;
            }
        }

        if (length == 0 || length > 3 || num > 255) return 0;
        segments++;

        return segments == 4 ? 1 : 0;
    }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends
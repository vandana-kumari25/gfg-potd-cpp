/*
Author : Vandana Kumari 
Date : 31/07/2024
Problem : Longest Common Prefix of Strings
Problem Link : https://www.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1
*/

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        // your code here
        if (arr.empty()) return "-1";
        int n = arr.size();
        string prefix = arr[0];

        for (int i = 1; i < n; ++i) {
            while (arr[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.length() - 1);
                if (prefix.empty()) return "-1";
            }
        }
        return prefix.empty() ? "-1" : prefix;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends
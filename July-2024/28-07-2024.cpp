/*
Author : Vandana Kumari 
Date : 28/07/2024
Problem : Remove Duplicates
Problem Link : https://www.geeksforgeeks.org/problems/remove-duplicates3034/1
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    string removeDups(string str) {
        // Your code goes here
        int fre[26] = {0};
        string result = ""; 
        
        for (char c : str) {
            if (fre[c - 'a'] == 0) { 
                result += c; 
                fre[c - 'a'] = 1; 
            }
        }
        
        return result;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        cout << ob.removeDups(s) << "\n";
    }

    return 0;
}
// } Driver Code Ends
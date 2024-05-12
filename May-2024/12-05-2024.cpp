/*
Author : Vandana Kumari 
Date : 12/05/2024
Problem : Minimum steps to destination
Problem Link : https://www.geeksforgeeks.org/problems/minimum-number-of-steps-to-reach-a-given-number5234/1
*/

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minSteps(int d) {
        // code here
        if (d == 0)
            return 0;

        int sum = 0;
        int move = 1;
        while (sum < d || (sum - d) % 2 != 0) {
            sum += move;
            move++;
        }

        return move - 1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int d;
        cin >> d;

        Solution ob;
        cout << ob.minSteps(d) << "\n";
    }
    return 0;
}
// } Driver Code Ends
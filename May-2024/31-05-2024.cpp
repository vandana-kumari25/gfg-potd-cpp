/*
Author : Vandana Kumari 
Date : 31/05/2024
Problem : Swap two nibbles in a byte
Problem Link : https://www.geeksforgeeks.org/problems/swap-two-nibbles-in-a-byte0446/1
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int swapNibbles(int n) {
        // code here
        int rn = (n & 0xF0) >> 4; 
        int ln = (n & 0x0F) << 4; 
        return rn | ln;
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
        cout << ob.swapNibbles(n) << endl;
    }
    return 0;
}
// } Driver Code Ends
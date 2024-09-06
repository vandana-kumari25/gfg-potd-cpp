/*
Author : Vandana Kumari 
Date : 06/09/2024
Problem : Kadane's Algorithm
Problem Link : https://www.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
*/

//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        // code here...
        int n = arr.size();
        long long maxh = 0, maxf = LLONG_MIN;
        
        for (int i = 0; i < n; i++) {
            maxh = max((long long)arr[i], maxh + arr[i]);
            maxf = max(maxf, maxh);
        }
        
        return maxf;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.maxSubarraySum(arr) << endl;
    }
}
// } Driver Code Ends
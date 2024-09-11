/*
Author : Vandana Kumari 
Date : 11/09/2024
Problem : Minimum Cost of ropes
Problem Link : https://www.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long>& arr) {
        // Your code here
        priority_queue<long long, vector<long long>, greater<long long>> minHeap(arr.begin(), arr.end());
        long long totalCost = 0;
        while (minHeap.size() > 1) {
            long long first = minHeap.top(); minHeap.pop();
            long long second = minHeap.top(); minHeap.pop();
            long long cost = first + second;
            totalCost += cost;
            minHeap.push(cost);
        }
        return totalCost;
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        long long num;
        vector<long long> a;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        cout << ob.minCost(a) << endl;
    }
    return 0;
}

// } Driver Code Ends
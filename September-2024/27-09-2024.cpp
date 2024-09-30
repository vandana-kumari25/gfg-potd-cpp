/*
Author : Vandana Kumari 
Date : 27/09/2024
Problem : K Sized Subarray Maximum Cost
Problem Link : https://www.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1
*/

//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
public:
    std::vector<int> max_of_subarrays(int k, const std::vector<int>& arr) {
        std::vector<int> res;
        std::priority_queue<std::pair<int, int>> maxHeap; 

        for (int i = 0; i < arr.size(); ++i) {
            maxHeap.push({arr[i], i});
            while (maxHeap.top().second <= i - k) {
                maxHeap.pop();
            }
            if (i >= k - 1) {
                res.push_back(maxHeap.top().first);
            }
        }

        return res;
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();

    while (t--) {

        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> res = obj.max_of_subarrays(k, arr);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends
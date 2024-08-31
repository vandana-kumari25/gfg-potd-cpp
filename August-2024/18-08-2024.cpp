/*
Author : Vandana Kumari 
Date : 18/08/2024
Problem : Split an array into two equal Sum subarrays
Problem Link : https://www.geeksforgeeks.org/problems/split-an-array-into-two-equal-sum-subarrays/1
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int totalSum = 0;
        for (int num : arr) {
            totalSum += num;
        }

        int rightSum = 0;
        for (int i = arr.size() - 1; i >= 0; --i) {
            rightSum += arr[i];
            if (rightSum * 2 == totalSum) {
                return true;
            }
        }
        return false;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t-- > 0) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        string temp;
        while (ss >> temp) {
            arr.push_back(stoi(temp));
        }

        Solution obj;
        bool res = obj.canSplit(arr);
        cout << (res ? "true" : "false") << endl;
    }
    return 0;
}
// } Driver Code Ends
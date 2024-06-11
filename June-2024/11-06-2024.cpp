/*
Author : Vandana Kumari 
Date : 11/06/2024
Problem : Maximum Tip Calculator
Problem Link : https://www.geeksforgeeks.org/problems/maximum-tip-calculator2631/1
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &a, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &a[i]);
        }
    }

    template <class T>
    static void print(vector<T> &a) {
        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    long long maxTip(int n, int x, int y, vector<int> &arr, vector<int> &brr) {
        // code here
        vector<pair<int, int>> diff(n);
        for (int i = 0; i < n; ++i)
            diff[i] = {abs(arr[i] - brr[i]), i};

        sort(diff.rbegin(), diff.rend());

        long long ans = 0;
        for (const auto &p : diff) {
            int i = p.second;
            if ((arr[i] > brr[i] && x > 0) || y == 0) {
                ans += arr[i];
                --x;
            } else {
                ans += brr[i];
                --y;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        int x;
        scanf("%d", &x);

        int y;
        scanf("%d", &y);

        vector<int> arr(n);
        Array::input(arr, n);

        vector<int> brr(n);
        Array::input(brr, n);

        Solution obj;
        long long res = obj.maxTip(n, x, y, arr, brr);

        cout << res << endl;
    }
}

// } Driver Code Ends
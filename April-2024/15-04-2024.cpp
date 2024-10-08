/*
Author : Vandana Kumari 
Date : 15/04/2024
Problem : Count the elements
Problem Link : https://www.geeksforgeeks.org/problems/count-the-elements1529/1
*/


//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
    public:
    vector<int> countElements(vector<int> &a, vector<int> &b, int n, vector<int> &query,
                                int q) {
        // Your code goes here;
        int maxi=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi, max(a[i], b[i]));
        }
        
        vector<int>arr(maxi+1,0);
        for(int i=0;i<n;i++){
            arr[b[i]]++;
        }
        
        for(int i=1;i<=maxi;i++){
            arr[i]+=arr[i-1];
        }
        
        vector<int>ans;
        for(auto it:query){
            ans.push_back(arr[a[it]]);
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;

    cin >> t;

    while (t--) {

        int n;
        cin >> n;
        vector<int> a, b, ans;
        int input;
        for (int i = 0; i < n; i++) {
            cin >> input;
            a.push_back(input);
        }
        for (int i = 0; i < n; i++) {
            cin >> input;
            b.push_back(input);
        }
        int q;
        cin >> q;
        vector<int> query;
        for (int i = 0; i < q; i++) {
            cin >> input;
            query.push_back(input);
        }
        Solution obj;
        ans = obj.countElements(a, b, n, query, q);
        for (int i = 0; i < q; i++) {
            cout << ans[i] << endl;
        }
    }
    return 0;
}
// } Driver Code Ends
/*
Author : Vandana Kumari 
Date : 12/04/2024
Problem : Sum of Products
Problem Link : https://www.geeksforgeeks.org/problems/sum-of-products5049/1
*/

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
    public:
    long long pairAndSum(int n, long long arr[]) {
        // code here
        long long ans=0;
        
        for(int i=0;i<32;i++){
            long long count=0;
            for(int j=0;j<n;j++){
                if(arr[j] & (1<<i)){
                    count++;
                }
            }
            ans+= (1<<i)*(count*(count-1)/2);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        long long Arr[N];
        for (int i = 0; i < N; i++) {
            cin >> Arr[i];
        }
        Solution ob;
        cout << ob.pairAndSum(N, Arr) << endl;
    }
    return 0;
}
// } Driver Code Ends
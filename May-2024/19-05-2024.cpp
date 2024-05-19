/*
Author : Vandana Kumari 
Date : 19/05/2024
Problem : Find the closest number
Problem Link : https://www.geeksforgeeks.org/problems/find-the-closest-number5513/1
*/

//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        // Complete the function
        int left = 0, right = n - 1;
        
        if (k <= arr[left]) {
            return arr[left];
        } else if (k >= arr[right]) {
            return arr[right];
        }
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (arr[mid] == k) {
                return arr[mid];
            } else if (arr[mid] < k) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        if (abs(arr[left] - k) <= abs(arr[right] - k)) {
            return arr[left];
        } else {
            return arr[right];
        }
    } 
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(n,k,arr)<<endl;
    }
}

// } Driver Code Ends
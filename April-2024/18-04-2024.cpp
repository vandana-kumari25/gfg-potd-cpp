/*
Author : Vandana Kumari 
Date : 18/04/2024
Problem : Two Repeated Elements
Problem Link : https://www.geeksforgeeks.org/problems/two-repeated-elements-1587115621/1
*/

//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> twoRepeated(int arr[], int n) {
        vector<int> out;
        for (int i = 0; i < n + 2; ++i) {
            if (arr[abs(arr[i])] > 0)
                arr[abs(arr[i])] = -arr[abs(arr[i])];
            else
                out.push_back(abs(arr[i]));
        }
        return out;
    }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        
        int a[n+2];
        
        for(int i=0;i<n+2;i++)
            cin>>a[i];
        
        Solution obj;
        vector<int> res;
        res = obj.twoRepeated(a, n);
        cout<<res[0]<<" "<<res[1]<<endl;
    }
    return 0;
}

// } Driver Code Ends
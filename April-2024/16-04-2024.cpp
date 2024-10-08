/*
Author : Vandana Kumari 
Date : 16/04/2024
Problem : Minimize the Difference
Problem Link : https://www.geeksforgeeks.org/problems/minimize-the-difference/1
*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    int minimizeDifference(int n, int k, vector<int> &arr) {
        // code here
        vector<int>post_max(n,0);
        vector<int>post_min(n,0);
        post_max[n-1]=arr[n-1];
        post_min[n-1]=arr[n-1];
        
        for(int i=n-2;i>=0;i--){
            post_max[i]=max(arr[i], post_max[i+1]);
            post_min[i]=min(arr[i], post_min[i+1]);
        }
        
        int ans=post_max[k]-post_min[k];
        
        int maxi=arr[0], mini=arr[0];
        
        for(int i=1;i<n-k;i++){
            ans=min(ans, max(post_max[i+k],maxi) - min(post_min[i+k],mini));
            
            maxi=max(arr[i], maxi);
            mini=min(arr[i], mini);
        }
        
        ans=min(ans, maxi-mini);
        
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        int k;
        scanf("%d",&k);
        
        
        vector<int> arr(n);
        Array::input(arr,n);
        
        Solution obj;
        int res = obj.minimizeDifference(n, k, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends


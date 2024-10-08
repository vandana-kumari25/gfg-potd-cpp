/*
Author : Vandana Kumari 
Date : 24/04/2024
Problem : Paths to reach origin
Problem Link : https://www.geeksforgeeks.org/problems/paths-to-reach-origin3850/1
*/

//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    int mod=1e9+7;
    int solve(int x, int y, vector<vector<int>>&dp){
        if(x==0 && y==0) return 1;
        if(dp[x][y]!=-1) return dp[x][y];
        
        int left=0,up=0;
        if(y>0){
            left=solve(x,y-1,dp)%mod;
        }
        if(x>0){
            up=solve(x-1,y,dp)%mod;
        }
        
        return dp[x][y] = (left+up)%mod;
    }

    int ways(int x, int y)
    {
        //code here.
        vector<vector<int>>dp(x+1,vector<int>(y+1,-1));
        return solve(x,y,dp);
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        Solution ob;
        cout<<ob.ways(x,y)<<endl;
    }
	return 0;
}

// } Driver Code Ends
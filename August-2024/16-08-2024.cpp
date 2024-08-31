/*
Author : Vandana Kumari 
Date : 16/08/2024
Problem : Maximize The Cut Segments
Problem Link : https://www.geeksforgeeks.org/problems/cutted-segments1642/1
*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of cuts.
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
        //Your code here
        int dp[n + 1];
        memset(dp, -1, sizeof(dp));
        dp[0] = 0;

        int cuts[] = {x, y, z};

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < 3; j++) {
                if (i >= cuts[j] && dp[i - cuts[j]] != -1) {
                    dp[i] = max(dp[i], dp[i - cuts[j]] + 1);
                }
            }
        }

        return dp[n] == -1 ? 0 : dp[n];

    }
};

//{ Driver Code Starts.
int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}
// } Driver Code Ends
/*
Author : Vandana Kumari 
Date : 04/09/2024
Problem : Count ways to N'th Stair(Order does not matter)
Problem Link : https://www.geeksforgeeks.org/problems/count-ways-to-nth-stairorder-does-not-matter5639/1
*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		int nthStair(int n){
		    //  Code here
		    if (n == 0) return 1;
        if (n == 1) return 1;
        int prev2 = 1;
        int prev1 = 1; 
        int current = 1;
        for (int i = 2; i <= n; i++) {
            current = prev2 + 1;
            prev2 = prev1;
            prev1 = current;
        }
        return current;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthStair(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
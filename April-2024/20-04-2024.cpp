/*
Author : Vandana Kumari 
Date : 20/04/2024
Problem : Union of Two Sorted Arrays
Problem Link : https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        if(arr1[0]>arr2[0]){
            return findUnion(arr2, arr1, m, n);
        }
        
        vector<int>ans={arr1[0]};
        int i=1, j=0;
        while(i<n && j<m){
            if(arr1[i]<arr2[j]){
                if(ans.back() != arr1[i]){
                    ans.push_back(arr1[i]);
                }
                i++;
            }
            else{
                if(ans.back() != arr2[j]){
                    ans.push_back(arr2[j]);
                }
                j++;
                
            }
        }
        while(i<n){
            if(ans.back()!=arr1[i]){
                ans.push_back(arr1[i]);
            }
            i++;
        }
        while(j<m){
            if(ans.back() != arr2[j]){
                ans.push_back(arr2[j]);
            }
            j++;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
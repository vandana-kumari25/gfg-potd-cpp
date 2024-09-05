/*
Author : Vandana Kumari 
Date : 05/09/2024
Problem : Missing in Array
Problem Link : https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1
*/

//{ Driver Code Starts
// Initial Template for C

#include <stdio.h>

int missingNumber(int n, int arr[]);


// } Driver Code Ends
// User function Template for C
// Note that the size of the array is n-1
int missingNumber(int n, int arr[]) {

    // Your code goes here
    int xorTotal = 0;
        for (int i = 1; i <= n; i++) {
            xorTotal ^= i;
        }
        int xorArray = 0;
        for (int i = 0; i < n - 1; i++) {
            xorArray ^= arr[i];
        }
        return xorTotal ^ xorArray;
}

//{ Driver Code Starts.

int main() {

    int t;
    scanf("%d", &t);

    while (t > 0) {
        int n;
        scanf("%d", &n);

        int arr[n - 1];
        for (int i = 0; i < n - 1; i++) {
            scanf("%d", &arr[i]);
        }

        printf("%d\n", missingNumber(n, arr));
        t--;
    }

    return 0;
}
// } Driver Code Ends
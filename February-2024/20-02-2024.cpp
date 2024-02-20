/*
Author : Vandana Kumari
Date : 20/02/2024
Problem : Word Break
Problem Link : https://www.geeksforgeeks.org/problems/word-break1352/1
*/


//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


//User function template for C++

// s : given string to search
// dictionary : vector of available strings

class Solution {
public:
    int wordBreak(int n, string s, vector<string> &dictionary) {
        // create a boolean array to store the results of subproblems
        vector<bool> dp(s.length() + 1, false);
        // base case: empty string can be segmented
        dp[0] = true;
        // loop through the string
        for (int i = 1; i <= s.length(); i++) {
            // loop through the dictionary
            for (string word : dictionary) {
                // check if the current substring ends with the word
                if (word.length() <= i && s.substr(i - word.length(), word.length()) == word) {
                    // if yes, update the dp array using the previous result
                    dp[i] = dp[i] || dp[i - word.length()];
                }
            }
        }
        // return the final result
        return dp[s.length()] ? 1 : 0;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dictionary;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dictionary.push_back(S);
        }
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.wordBreak(n, s, dictionary)<<"\n";
    }
}

// } Driver Code Ends

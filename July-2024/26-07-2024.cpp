/*
Author : Vandana Kumari 
Date : 26/07/2024
Problem : K-Pangrams
Problem Link : https://www.geeksforgeeks.org/problems/k-pangrams0909/1
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    bool kPangram(string str, int k) {
        // code here
        unordered_map<char, int> frequency;
        for (char c : str) {
            if (isalpha(c)) {
                frequency[c]++;
            }
        }

        int cnt = 0;
        int uniq = 0;

        for (const auto& pair : frequency) {
            if (isalpha(pair.first)) {
                cnt += pair.second;
                uniq++;
            }
        }

        return cnt >= 26 && (26 - uniq) <= k;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        string str;
        getline(cin, str);

        int k;
        cin >> k;

        Solution ob;
        bool a = ob.kPangram(str, k);
        if (a)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends
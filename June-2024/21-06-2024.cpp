/*
Author : Vandana Kumari 
Date : 21/06/2024
Problem : Compare two fractions
Problem Link : https://www.geeksforgeeks.org/problems/compare-two-fractions4438/1
*/

//{ Driver Code Starts

#include <iostream>
#include <regex>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string compareFrac(string str) {

        // Code here
        int n = str.length();
        int a = 0, b = 0, c = 0, d = 0;
        int i = 0;
        while (i < n && str[i] != '/') {
            a = a * 10 + str[i] - '0';
            i++;
        }
        i++;
        while (i < n && str[i] != ',') {
            b = b * 10 + str[i] - '0';
            i++;
        }
        i += 2;
        while (i < n && str[i] != '/') {
            c = c * 10 + str[i] - '0';
            i++;
        }
        i++;
        while (i < n) {
            d = d * 10 + str[i] - '0';
            i++;
        }
        if ((a * d) > (b * c)) {
            return to_string(a) + "/" + to_string(b);
        } else if ((a * d) < (b * c)) {
            return to_string(c) + "/" + to_string(d);
        }
        return "equal";
    }
};


//{ Driver Code Starts.

int main() {
    Solution ob;
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {

        string str;
        getline(cin, str);

        cout << ob.compareFrac(str) << endl;
    }
    return 0;
}

// } Driver Code Ends
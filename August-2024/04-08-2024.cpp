/*
Author : Vandana Kumari 
Date : 04/08/2024
Problem : N meetings in one room
Problem Link : https://www.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(int n, int start[], int end[]) {
        // Your code here
        vector<pair<int, int>> meetings;

        for (int i = 0; i < n; i++) {
            meetings.emplace_back(end[i], start[i]);
        }

        sort(meetings.begin(), meetings.end());

        int lastEndTime = -1;
        int res = 0;

        for (const auto& meeting : meetings) {
            if (meeting.second > lastEndTime) {
                res++;
                lastEndTime = meeting.first;
            }
        }

        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++)
            cin >> start[i];

        for (int i = 0; i < n; i++)
            cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(n, start, end);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends
/*
Author : Vandana Kumari 
Date : 08/03/2024
Problem : Check if frequencies can be equal
Problem Link : https://www.geeksforgeeks.org/problems/check-frequencies4211/1
*/ 

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool check(vector<int> freq){
        int n = -1;
        for(int i=0;i<26;i++){
            if(freq[i]==0)continue;
            if(n==-1)n=freq[i];
            else if(n!=freq[i])return false;
        }
        return true;
    }
	bool sameFreq(string s)
	{
	    vector<int> freq(26,0);
	    for(char ch:s){
	        freq[ch-'a']++;
	    }
	    
	    if(check(freq))return true;
	    
	    for(int i=0;i<26;i++){
	        if(freq[i]==0)continue;
	        freq[i]--;
	        if(check(freq)) return true;
	        freq[i]++;
	    }
	    
	    return false;
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends
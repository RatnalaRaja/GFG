//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
    
    public:
bool solve(int n,int coins[],vector<vector<int>>&dp,int i,int sum)
    {
        if(i==n)
        {
            if((sum%20==0|| sum%24==0 || sum==2024) and sum!=0)
            {
                return 1;
            }
            
            return 0;
        }
        
        if(dp[i][sum]!=-1)
            return dp[i][sum];
            
        
        int include=solve(n,coins,dp,i+1,coins[i]+sum);
        int exclude=solve(n,coins,dp,i+1,sum);
        
        
        return dp[i][sum]=(include||exclude);
    }
    
    int isPossible(int N , int coins[]) 
    {
        vector<vector<int>>dp(N,vector<int>(2024,-1));
        
        return solve(N,coins,dp,0,0);
    }
    
};




//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int coins[N];
        for(int i=0 ; i<N ; i++)
            cin>>coins[i];

        Solution ob;
        cout << ob.isPossible(N,coins) << endl;
    }
    return 0;
}
// } Driver Code Ends
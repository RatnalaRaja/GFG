//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int TCS(string &s,string &si,int n,vector<vector<int>>&dp){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==0 or j==0)dp[i][j]=0;
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(s[i-1]==si[j-1] && i!=j){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][n];
    }
    int LongestRepeatingSubsequence(string &s) {
        // Code here
        
        int n=s.length();
        vector<vector<int>>dp(n+1,vector<int>(n+1));
        return TCS(s,s,n,dp);
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string str;
        cin >> str;
        Solution obj;
        int ans = obj.LongestRepeatingSubsequence(str);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
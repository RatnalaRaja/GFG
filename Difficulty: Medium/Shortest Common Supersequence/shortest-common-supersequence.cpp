//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    // Function to find length of shortest common supersequence of two strings.
    int LCS(string &s1, string &s2,int n,int m,vector<vector<int>>&dp ){
            for(int i=1;i<n+1;i++){
                for(int j=1;j<m+1;j++){
                    if(s1[i-1]==s2[j-1]){
                        dp[i][j]=1+dp[i-1][j-1];
                    }
                    else{
                        dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                    }
                }
             
            }
               return dp[n][m];
    }
    int shortestCommonSupersequence(string &s1, string &s2) {
        // code here
        int n=s1.length();
        int m=s2.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        //cout<<LCS(s1,s2,n,m,dp)<<endl;
        return n+m-LCS(s1,s2,n,m,dp);
    }
};


//{ Driver Code Starts.

int main() {

    int t;

    // taking total testcases
    cin >> t;
    while (t--) {
        string X, Y;
        // taking String X and Y
        cin >> X >> Y;

        // calling function shortestCommonSupersequence()
        Solution obj;
        cout << obj.shortestCommonSupersequence(X, Y) << endl;
    }
    return 0;
}

// } Driver Code Ends
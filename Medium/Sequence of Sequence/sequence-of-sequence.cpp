//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
    int solve(int i,int n,int m){
        if(n==0) return 1;
        int ans=0;
        for(int j=2*i;j<=m;j++){
            ans+=solve(j,n-1,m);
        }
        return ans;
    }
public:
    int numberSequence(int m, int n){
        // code here
        int res=0;
        for(int i=1;i<=m;i++)
        res+=solve(i,n-1,m);
        return res;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int m, n;
        cin>>m>>n;
        
        Solution ob;
        cout<<ob.numberSequence(m, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends
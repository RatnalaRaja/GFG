//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {

  public:
    int dp[201][10001];
    int minidi(vector<int>& arr,int n,int sum){
        if(n==0 || sum==0)return 0;
        if(arr[n-1]>sum){
            return dp[n][sum]=minidi(arr,n-1,sum);
        }
        if(dp[n][sum]!=-1)return dp[n][sum];
        int include=arr[n-1]+minidi(arr,n-1,sum-arr[n-1]);
        int exclude=minidi(arr,n-1,sum);
        return dp[n][sum]=max(include,exclude);
    }
    int totii(vector<int>& arr){
        int to=0;
        for(int &i:arr){
            to+=i;
        }
        int closi=minidi(arr,arr.size(),to/2);
        return abs(to-(2*closi));
    }
    int minDifference(vector<int>& arr) {
        // Your code goes here
        memset(dp,-1,sizeof(dp));
        int n=arr.size();
        return totii(arr);
    }
};



//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int ans = ob.minDifference(arr);

        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends
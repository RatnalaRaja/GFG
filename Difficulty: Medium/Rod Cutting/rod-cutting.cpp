//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
  vector<int>dp;
    int value(vector<int> &prices,int n){
        if(n==0)return 0;
        if(dp[n]!=-1)return dp[n];
        int maxpro=0;
        for(int i=1;i<=n;i++){
             maxpro = max(maxpro, prices[i - 1] + value(prices, n - i));
        }
        return dp[n]=maxpro;
    }
    int cutRod(vector<int> &price) {
        // code here
        int n=price.size();
        dp.assign(n + 1, -1);
        return value(price,n);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution ob;

        cout << ob.cutRod(a) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends
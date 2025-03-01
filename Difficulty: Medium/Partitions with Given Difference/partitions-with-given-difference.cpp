//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  int dp[201][1001];
 int isSumo(vector<int>& arr, int target, int n) {
    
    if (n == 0 && target == 0) {
        return 1;
    }
    
    if (n == 0 && target != 0) {
        return 0;
    }

   if(dp[n][target]!=-1)return dp[n][target];
    if (arr[n - 1] > target) return dp[n][target]= isSumo(arr, target, n - 1);

   
    return dp[n][target]= isSumo(arr, target - arr[n - 1], n - 1) + isSumo(arr, target, n - 1);
}
    int countPartitions(vector<int>& arr, int d) {
        // Code here
        int n=arr.size();
        memset(dp,-1,sizeof(dp));
        int summi=accumulate(arr.begin(),arr.end(),0);
        if((summi-d)%2!=0)return 0;
        int s1=(summi-d)/2;
       
        return isSumo(arr,s1,n);
    }
};


//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.countPartitions(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
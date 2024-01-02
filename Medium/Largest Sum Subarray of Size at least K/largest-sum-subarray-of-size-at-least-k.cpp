//{ Driver Code Starts
// C++ program to find largest subarray sum with
// at-least k elements in it.
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:    
    long long int maxSumWithK(long long int a[], long long int n, long long int k) 
    {
        long long int sum = 0, sum2 = 0, ans = LLONG_MIN;
        int cnt = 0;
        
        for(int i = 0, j = 0; i < n; ++i) {
            sum += a[i];
            if(i-j+1>=k) {
                sum -= a[j];
                if(sum2 < 0) sum2 = 0;
                sum2 += a[j++];
                ans = max(ans, sum + sum2);
            }
        }
        
        return ans;  
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, k, i;
        cin >> n;
        long long int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> k;
        Solution ob;
        cout << ob.maxSumWithK(a, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends
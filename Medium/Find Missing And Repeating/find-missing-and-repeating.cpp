//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        unordered_map<int,int>m;
        int repeat,x=0;
        
        for(int i=0;i<n;i++){
            m[arr[i]]++;
            x=x^arr[i];
            x=x^(i+1);
            
            if(m[arr[i]]==2)
            repeat =arr[i];
        }
        
        x=x^repeat;
        
        return {repeat,x};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends
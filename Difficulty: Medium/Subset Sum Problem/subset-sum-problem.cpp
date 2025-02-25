//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    bool isSub(vector<int>& arr, int target,int n){
        if( target==0)return true;
        if(n==0)return false;
        if(arr[n-1]<=target){
            return isSub(arr,target-arr[n-1],n-1) or isSub(arr,target,n-1);
        }
        else if(arr[n-1]>target)return isSub(arr,target,n-1);
    }
    bool isSubsetSum(vector<int>& arr, int target) {
        // code her
        int n=arr.size();
        return isSub(arr,target,n);
       
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int sum;
        cin >> sum;
        cin.ignore();

        Solution ob;
        if (ob.isSubsetSum(arr, sum))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
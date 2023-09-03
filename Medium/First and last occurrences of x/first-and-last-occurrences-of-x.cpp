//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    { vector<int>a;
        int flag = 1;
        for (int i = 0; i < n; i++){
            if (arr[i] == x && (arr[i+1] != x || i == n-1) && flag) return {i,i};
            if (arr[i] == x&&flag){
                a.push_back(i);
                flag = 0;
            }
            if (flag == 0 && (arr[i] != arr[i+1] || i == n-1)){
                a.push_back(i);
            } 
        }
        if (a.size()) return a;
        return {-1, -1};
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        if(n<m)return -1;
        if(n==0 || m==0)return 0;
        sort(a.begin(),a.end());
        long long min_diff= LLONG_MAX;;
        
        for(int i=0;i + m - 1<n;i++){
            long long diff=a[i+m-1]-a[i];
            if(diff<min_diff)min_diff=diff;
        }
        return min_diff;
    }   
};

//{ Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int mod = 1e9+7;
	int TotalWays(int N){
	    
	    if(N==1)    return 4;
	    if(N==2)    return 9;
	    
	    
	    int a = 2, b = 3, s = 0;
	   
	    for(int i = 3;i<=N;i++){
	        int c = (a+b) %mod;
	        s =  (1LL * c * c) % mod; 
	        a = b;
	        b = c;
	    }
	    return s;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
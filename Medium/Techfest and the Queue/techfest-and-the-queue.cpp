//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
	 int helper(int n){
        int out=0;
        while(n%2==0 and n>0){
            out++;
            n/=2;
        }
        for(int i=3;i<=sqrt(n);i+=2){
            while(n%i==0 and n>0){
                out++;
                n/=i;
            }
        }
        if(n>1) out++;
        return out;
    }
	int sumOfPowers(int a, int b){
	    int ans=0;
	    for(int i=a;i<=b;i++){
	        ans+=helper(i);
	    }
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, b;
		cin >>  a >> b;
		Solution obj;
		int ans = obj.sumOfPowers(a, b);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
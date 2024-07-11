//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    
		    int freq[26]={0};
		    string res="";
		    queue<char>q;
		    
		    for(int i=0;i<A.length();i++){
		        char ch=A[i];
		        freq[ch-'a']++;
		        q.push(ch);
		        
		        while(!q.empty()){
		            if(freq[q.front() - 'a']>1){
		                q.pop();
		            }
		            else{
		                res+=q.front();
		                break;
		            }
		        }
		        if(q.empty()){
		            res+='#';
		    }
		    
		  }
		return res;
		}
		
		
		

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
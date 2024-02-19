//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    
    void gp(int n, vector<string>& gene, string curr, int open, int closed) {
    if (closed == n) {
        gene.push_back(curr);
        return;
    }
    if (open < n) {
        gp(n, gene, curr + '(', open + 1, closed);
    }
    if (closed < open) {
        gp(n, gene, curr + ')', open, closed + 1);
    }
}
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string>gene;
        string curr="";
        
        gp(n,gene,curr,0,0);
        return gene;
    }
};

//{ Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends
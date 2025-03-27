//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        stack<int>st;
        for(int i=0;i<s.length();i++){
            char si=s[i];
            if(si=='(' or si=='{' or si=='[')st.push(s[i]);
            else if(!st.empty() and (st.top()=='(' and si==')' or st.top()=='[' and si==']' or  st.top()=='{' and si=='}' ))
            {
                st.pop();
            }
            else if(st.empty())return false;
            else return false;
        }
        return (st.size()==0);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        Solution obj;
        if (obj.isBalanced(a))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends
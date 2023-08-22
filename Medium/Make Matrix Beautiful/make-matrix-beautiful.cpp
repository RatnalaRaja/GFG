//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here 
        int s1=0,s2=0;
        vector<int>v;
        vector<int>v1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                s1+=matrix[j][i];
                s2+=matrix[i][j];
            }
                v.emplace_back(s1);
                v1.emplace_back(s2);
                s2=0;
                s1=0;
        }
        int k=*max_element(v.begin(),v.end());
        int l=*max_element(v1.begin(),v1.end());
        int s3=0,s4=0;
        for(auto &i:v){
            s3+=(k-i);
        }
        for(auto &i:v1){
            s4+=(l-i);
        }
        return max(s3,s4);
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
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends
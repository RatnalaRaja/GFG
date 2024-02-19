//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    
    void help(vector<int> &A, int b,vector<vector<int>>&comb,vector<int>&v,int ind){
        if(b==0){
            comb.push_back(v);
            return;
        }
        if(b<0)return;
        for(int i=ind;i<A.size();i++){
            if (i > ind && A[i] == A[i - 1]) continue;
            v.push_back(A[i]);
            help(A,b-A[i],comb,v,i);
            v.pop_back();
        }
    }
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
         set<int>st(A.begin(),A.end());
        vector<vector<int>>comb;
        vector<int>sumo;
        sort(A.begin(),A.end());
        help(A,B,comb,sumo,0);
        
        return comb;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:


double fractionalKnapsack(int W, Item arr[], int n)

    {

        pair<double,int> frac[n];

        for(int i=0;i<n;i++)frac[i]={(double(arr[i].value)/arr[i].weight),i};

        sort(frac,frac+n,greater<pair<double,int>>());

        

        double ans=0;

        for(int i=0;i<n;i++)

        {

            if(W>=arr[frac[i].second].weight)

            {

                ans+=arr[frac[i].second].value;

                W-=arr[frac[i].second].weight;

            }

            else if(W<arr[frac[i].second].weight)

            {

                ans+=W*(double(arr[frac[i].second].value)/arr[frac[i].second].weight);

                break;

            }

        }

        

        return ans;

    }
        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(6)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends
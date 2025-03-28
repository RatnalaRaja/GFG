//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find the next greater element for each element of the array.
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        vector<int>v;
        stack<int>st;
        st.push(-1);
        for(int i=arr.size()-1;i>=0;i--){
            if(st.empty()){
                v.push_back(-1);
            }
            else if(!st.empty() and st.top()>arr[i]){
                v.push_back(st.top());
                
            }
            else if(!st.empty() and st.top()<=arr[i]){
                while(!st.empty() and st.top()<=arr[i]){
                    st.pop();
                   
                }
                if(st.empty())v.push_back(-1);
                else v.push_back(st.top());
            }
            st.push(arr[i]);
            
            }
            //st.push(arr[i]);
            reverse(v.begin(),v.end());
        return v;
        }
};


// class Solution
// {
//     public:
//     //Function to find the next greater element for each element of the array.
//     vector<long long> nextLargerElement(vector<long long> arr, int n){
//         // Your code here
//         vector<long long >v;
//         stack<long long >s;
//         for(int i=n-1;i>=0;i--){
//             if(s.size()==0){
//                 v.push_back(-1);
//             }
//             else if(s.size()>0 && s.top()>arr[i]){
//                 v.push_back(s.top());
//             }
//             else if(s.size()>0 && s.top()<=arr[i]){
//                 while(s.size()>0 && s.top()<=arr[i]){
//                     s.pop();}
//                     if(s.size()==0){
//                         v.push_back(-1);
//                     }
//                     else{
//                         v.push_back(s.top());
//                     }
//                 }
//             s.push(arr[i]);
//             }
//             reverse(v.begin(),v.end());
//             return v;
//         }
// };

//{ Driver Code Starts.

int main() {
    int t; // Number of test cases
    cin >> t;
    cin.ignore(); // Ignore the newline after reading t
    while (t--) {
        vector<int> a;
        string input;

        // Reading the entire input line for the array
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num); // Read the array elements from input string

        Solution obj;
        vector<int> result = obj.nextLargerElement(a);

        // Print the result in the required format
        for (int i = 0; i < result.size(); i++) {
            if (i != 0)
                cout << " ";
            cout << result[i];
        }
        cout << endl;        // Ensure new line after each test case output
        cout << "~" << endl; // Ensure new line after each test case output
    }

    return 0;
}

// } Driver Code Ends
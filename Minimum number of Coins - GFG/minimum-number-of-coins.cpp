//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> minPartition(int N)
    {
        // code here
        int a[10]={1,2,5,10,20,50,100,200,500,2000};
        vector<int> ans;
        int p=9;
        for (int i=p;i>=0;i--){
            if(N>=a[i]){
                int x=N/a[i];
                for(int j=0;j<x;j++)    ans.push_back(a[i]);
                N=N%a[i];
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends
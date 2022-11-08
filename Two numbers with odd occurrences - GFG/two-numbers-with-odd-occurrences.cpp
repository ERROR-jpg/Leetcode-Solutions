//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int arr[], long long int n)  
    {
        // code here
        int xorr = 0, res1 =0, res2=0;
        
        for(int i =0; i<n ;i++){
            xorr ^= arr[i];
        }
        
        int r_most_setbit = xorr & (~(xorr-1));
        
        for(int i =0; i<n ;i++){
            if((r_most_setbit & arr[i])!=0)
            res1 ^= arr[i];
        else{
            res2^=arr[i];
            
        }
        }
    
        
        if(res1>res2)
            return {res1, res2};
        else  
            return {res2, res1};
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
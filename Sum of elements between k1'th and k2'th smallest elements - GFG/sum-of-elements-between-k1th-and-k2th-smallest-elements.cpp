//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long sumBetweenTwoKth( long long arr[], long long n, long long k1, long long k2)
    {
        // Your code goes here
        priority_queue<long long, vector<long long>, greater<long long>> minh;
        long long ans = 0;
        for(int i =0; i<n; i++){
            minh.push(arr[i]);
        }
       
      
        while(minh.size()> n-k1){
            minh.pop();
        }
        
      
        while(minh.size()>n-k2+1){
            long long temp = minh.top();
            ans+=temp;
            minh.pop();
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        cin>>n;
        long long a[n+5];
        for(int i =0;i<n;i++)
            cin >> a[i];
        
        long long k1, k2;
        cin >> k1 >> k2;
        Solution ob;
        cout << ob.sumBetweenTwoKth(a, n, k1, k2) << endl;
        
    }
	return 0;
}

// } Driver Code Ends
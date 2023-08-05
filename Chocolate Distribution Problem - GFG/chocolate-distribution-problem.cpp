//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    
    typedef long long ll;
    
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        
       sort(a.begin(), a.end());
      ll ans = INT_MAX;
    
      ll i =0;
      ll j= m-1;
      
      while(j<n){
          
        ll temp = a[j] - a[i];
        
        ans= min(ans,temp);
        i++;
        j++;
        
      }
        return ans;

    }   
};


//{ Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
// } Driver Code Ends
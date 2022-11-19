//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long heights[], int n)
    {
        // int n = heights.size();
        stack<long long> st;
        long long ans =0;
        
        for(int i=0; i<=n; i++){
            while(!st.empty() && (i==n || heights[st.top()]>=heights[i])){
                long long height = heights[st.top()];
                st.pop();
                long long width;
                if(st.empty()) width = i;
                else width = i - st.top() -1;
                ans = max (ans, width * height);
            }
            st.push(i);
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
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends
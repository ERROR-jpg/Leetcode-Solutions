//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
        priority_queue<long long, vector<long long>, greater<long long>> minh;
        long long ans = 0;
        
        for(long long i =0; i<n; i++){
            minh.push(arr[i]);
        }
        
        while(minh.size()>1){
            long num1 = minh.top();
            minh.pop();
            long num2 = minh.top();
            minh.pop();
            long num3 = num1+num2;
            ans += num3;
            minh.push(num3);
        }
                                                                                         
        return ans;                       
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends
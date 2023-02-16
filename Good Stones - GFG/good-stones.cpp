//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
public:
    int goodStones(int n,vector<int> &arr){
        // Code here
         vector <int> vis(n);

        set <int> good;

        for(int i = 0; i < n; i++) {

            if(!vis[i]) {

                set <int> s;

                int j = i;

                vis[j] = 1;

                s.insert(j);

                while(j + arr[j] < n && j + arr[j] >= 0 && !vis[j + arr[j]]) {

                    j = j + arr[j];

                    vis[j] = 1;

                    s.insert(j);

                }

                if(j + arr[j] >= n || j + arr[j] < 0 || good.find(j + arr[j]) != good.end()) {

                    for(auto &k : s) {

                        good.insert(k);

                    }

                }

            }

        }

        return good.size();
    }  
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.goodStones(n,arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends
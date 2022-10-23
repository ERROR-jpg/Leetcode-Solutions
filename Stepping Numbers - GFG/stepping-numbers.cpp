//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    
    void exploreAllPath(int value, int&a, int&b, vector<int>&ans){
        if(value>b) return;
    
    
    if(value>=a && value<=b){
        ans.push_back(value);
    }
    
    int back = value%10;
    
    if((back)!=0){
        exploreAllPath(value*10+(back-1), a,b, ans);
    }
    
    if((back)!=9){
        exploreAllPath(value*10+(back+1), a, b, ans);
    }
}

    int steppingNumbers(int A, int B)
    {
        // Code Here
        vector<int>ans;
        
        if(A==0) ans.push_back(0);
        
        for(int i=1; i<=9;i++){
            exploreAllPath(i, A, B, ans);
        }
        
        sort(ans.begin(), ans.end());
        return ans.size();
    }
};


//{ Driver Code Starts.

int main()
{
    Solution obj;
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        cout << obj.steppingNumbers(n,m) << endl;
    }
	return 0;
}


// } Driver Code Ends
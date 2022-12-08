//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& m, int n) 
    {
        // code here 
        stack<int> st;
        for(int i = 0; i< n; i++){
            st.push(i);
        }
        
        while(st.size()>=2){
            int i = st.top();
            st.pop();
            
            int j = st.top();
            st.pop();
            
            if(m[i][j] == 1){
                // if i knows j then i is not the celebrity
                st.push(j);
                
            }else{
                // if i doesnt know j then j cant be a celebrity
                st.push(i);
            }
        }
        
        int pot = st.top();
        st.pop();
        
        for(int i=0; i< n; i++){
            if(i!=pot){
                if(m[i][pot] == 0 || m[pot][i] == 1){
                    return -1;
                }
            }
        }
        return pot;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends
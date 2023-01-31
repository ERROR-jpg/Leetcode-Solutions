//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<vector<int>> insertNewEvent(int N, vector<vector<int>> &in, vector<int> &ni) {

        // code here

        vector<vector<int>> ans;

        for(int i=0;i<in.size();i++){

            if(ni[1]<in[i][0]){

                ans.push_back(ni);

                for(;i<in.size();i++)

                    ans.push_back(in[i]);

                return ans;

            }

            else if(ni[0]>in[i][1]){

                ans.push_back(in[i]);

            }

            else{

                ni[0]=min(ni[0],in[i][0]);

                ni[1]=max(ni[1],in[i][1]);

            }

        }

        ans.push_back({ni[0],ni[1]});

        return ans;

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> intervals(N,vector<int>(2));
        for (int i = 0; i < N; i++) {
            cin >> intervals[i][0]>>intervals[i][1];
        }
        vector<int> newEvent(2);
        cin>>newEvent[0]>>newEvent[1];
        
        Solution obj;
        vector<vector<int>> ans = obj.insertNewEvent(N, intervals,newEvent);
        cout<<"[";
        for(int i=0;i<ans.size();i++){
            cout<<"["<<ans[i][0]<<','<<ans[i][1]<<']';
            if(i!=(ans.size()-1)) cout<<",";
        }
        cout<<"]"<<endl;
    }
    return 0;
}
// } Driver Code Ends
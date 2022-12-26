//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isStraightHand(int N, int W, vector<int> &hand) {
        // code here
        if(hand.size() % W!=0) return false;
        
        map<int, int> m;
        for(auto &card : hand)
            m[card]++;
            
        while(m.size()!=0){
            int cur = m.begin()->first;
            for(int i =0; i<W; i++){
                if(m[cur+i]==0)
                    return false;
                else if(--m[cur+i]<1)
                    m.erase(cur+i);
            }
        }
        
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, groupSize;
        cin >> N >> groupSize;

        vector<int> hand(N);
        for (int i = 0; i < N; i++) cin >> hand[i];

        Solution obj;
        int ans = obj.isStraightHand(N, groupSize, hand);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends
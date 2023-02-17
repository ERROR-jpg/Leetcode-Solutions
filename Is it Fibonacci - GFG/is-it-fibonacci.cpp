//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
      long long solve(int N, int K, vector<long long> GeekNum) {
    if (N <= K) return GeekNum[N - 1];
    queue<long long> q;
    long long next = 0;
    for (const auto& l : GeekNum) {
        q.push(l);
        next += l;
    }
    int c = N - K - 1;
    while (c-- > 0) {
        const auto out = q.front();
        q.pop();
        q.push(next);
        next += next - out;
    }
    return next;
 }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    }
    return 0;
}

// } Driver Code Ends
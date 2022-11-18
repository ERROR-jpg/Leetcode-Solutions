//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
   string removeKdigits(string num, int k) {
        if(num.length()==k)return "0";
   
	stack<char> s;
        for(char c:num){
            while(k && !s.empty() && int(s.top())>int(c)){s.pop();k--;} 
            s.push(c);
}
        if(k) while(k--){s.pop();}
       
        stack<char> t;
        while(!s.empty()){t.push(s.top());s.pop();}
        while(t.top()=='0'&&t.size()!=1)t.pop();

        num="";
        while(!t.empty()){num.push_back(t.top());t.pop();}
        return num;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout << obj.removeKdigits(S, K) << endl;
    }
    return 0;
}

// } Driver Code Ends
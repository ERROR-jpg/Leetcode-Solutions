//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
          stack<string> chars;
       stack<int> nums;
       string res = "" ;
       int num = 0;

       for(char c : s){
           if(isdigit(c)){
               num = num * 10 + (c-'0');
           }else if(c == '['){
               chars.push(res);
               nums.push(num);
               res = "";
               num = 0;
           }else if(c == ']'){
               string tmp = res;
               res = chars.top();
               chars.pop();
               for(int i = nums.top(); i>0; i--) res+=tmp;
               nums.pop();
           }else{
               res+=c;
           }
       }
       return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
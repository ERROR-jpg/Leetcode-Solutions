//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // You need to complete this function
    
     void move(int N, int from, int to, int aux ,long long & res)
    {
        
        if(N==0)
            return;
        // move N-1 from source to aux via des
        move(N-1 , from , aux, to , res);
        // source -> target;
        cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
        res++;
        // move the N-1 from aux to des via source
        move(N-1 , aux,to,from , res);
    }
    
    // avoid space at the starting of the string in "move disk....."
    long long toh(int N, int from, int to, int aux) {
        // Your code here
        long long res=0;
        move(N , 1, 3, 2 , res);
        return res;
    }

};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}


//Position this line where user code will be pasted.
// } Driver Code Ends
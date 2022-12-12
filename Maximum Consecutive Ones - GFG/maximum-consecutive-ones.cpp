//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int longestOnes(int n, vector<int>& nums, int k) {
        // Code here
        int left = 0;
       int right = 0;
        int max_consecutive_ones = 0;
  int num_zeros = 0;

  while (right < nums.size()) {
    if (nums[right] == 0) {
      num_zeros += 1;
    }
    right += 1;

    while (num_zeros > k) {
      if (nums[left] == 0) {
        num_zeros -= 1;
      }
      left += 1;
    }
    max_consecutive_ones = max(max_consecutive_ones, right - left);
  }

  return max_consecutive_ones;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            nums.push_back(x);
        }

        int k;
        cin >> k;

        Solution obj;
        cout << obj.longestOnes(n, nums, k) << endl;
    }
    return 0;
}
// } Driver Code Ends
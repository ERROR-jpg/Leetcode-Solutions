class Solution {
public:
    int heightChecker(vector<int>& heights) {
      vector<int> h1;
        int n = heights.size();
        for (int i=0; i<n; i++){
            h1.push_back(heights[i]);
        }
        sort(h1.begin(), h1.end());
        int counter = 0;
        for(int i =0; i<n;i++){
            if(h1[i]!=heights[i]){
                counter ++;
            }
        }
        return counter;
    }
};
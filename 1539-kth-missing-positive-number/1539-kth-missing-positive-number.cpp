class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        set<int>s ;
        
        int n = arr.size();
        int m = arr[n-1];
    
        for(int i =0; i<n; i++){
            s.insert(arr[i]);
        }
        
        vector<int> v;
        
        
        for(int i = 1; i<m+k+1; i++){
            if(s.find(i)==s.end())
                v.push_back(i);
        }
        
        
        return v[k-1];
    }
};
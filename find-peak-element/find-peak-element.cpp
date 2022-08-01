class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        if(arr.size()==1) return 0;
        int low = 0;
        int high = arr.size()-1;
        int size = arr.size();
        
        while(low<=high){
            int mid = low+(high-low)/2;
            if(mid>0 && mid<arr.size()-1){
                if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
                    return mid;
                else if(arr[mid-1]>arr[mid]){
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
            }
            else if(mid==0){
                if(arr[0]>arr[1])
                    return 0;
               else{
                return 1;
            }
            }
            else if(mid==arr.size()-1)
                if(arr[size-1]>arr[size-2])
                    return size-1;
                else
                    return size-2;    
        }
        return -1;
    }
    
};
class Solution {
public:
     bool fnc(int mid,  vector<int>&arr, int N, int D){
        int sum = 0;
        int days =1;
        for(int i=0; i<N;i++){
            if(sum+arr[i]<=mid) sum+=arr[i];
            else{
                sum =arr[i];
                days++;
            }
        }
        if(days<=D) return true;
        return false;
    }
  
    
    int shipWithinDays(vector<int>& arr, int D) {
       int N = arr.size();
        int sum=0;
        int max =0;
        for(int i=0; i<N;i++){
            if(arr[i]>max)max=arr[i];
            sum+=arr[i];
        }
        int low = max;
        int high = sum;
        int ans;
        while(low<=high){
            int mid = (low+high)/2;
            if(fnc(mid, arr, N, D)){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return ans;
    }
};
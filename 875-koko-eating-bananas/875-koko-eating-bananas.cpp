class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        
        int ans = 0;
        while(low<=high){
            long long mid = low+(high -low)/2;
            long long int time = timefnc(mid, piles);
            
            if(time<=h){
                ans = mid;
                high = mid-1;
            }else low= mid+1;
        }
        
        return ans;
        
    }
    
    long long int timefnc(int mid, vector<int> piles){
         long long int sum = 0;
        for(int i =0; i<piles.size();i++){
            sum+=(piles[i]/mid)+((piles[i]%mid)!=0);
                
        }
        return sum;
    }
};
class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> maxh(piles.begin(), piles.end());
        int ans = 0;
        
        
        while(k){
            int temp = maxh.top();
            maxh.pop();
            // cout<<temp<<" ";
            int fl = temp-(temp/2);
            maxh.push(fl);
            k--;
            // cout<<fl<<endl;
        }
          
        while(!maxh.empty()){
            int temp = maxh.top();
            ans+=temp;
            maxh.pop();
        }

        return ans;
    }
};
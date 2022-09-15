class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        
       vector<int> pos;
	    vector<int> neg;
        int n=arr.size();
	    
	    for(int i =0; i<n;i++){
	        if(arr[i]>=0){
	            pos.push_back(arr[i]);
	        }else{
	            neg.push_back(arr[i]);
	        }
	    }
	    vector<int> ans;
	    for(int i=0; i<n;i++){
	        if(i<pos.size()){
	        ans.push_back(pos[i]);
	        }
	        if(i<neg.size()){
	        ans.push_back(neg[i]);
	        }
	    }
	    return ans;
    }
};
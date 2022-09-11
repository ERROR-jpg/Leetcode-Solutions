class Solution {
public:
    void sortColors(vector<int>& a) {
       int count0 = 0;
        int count1 = 0;
        int count2 =0;
        for(int i =0; i<a.size();i++){
            if(a[i]==0){
                count0++;
            }else if(a[i]==1){
            count1++;
            }else
            count2++;
    } 
   
    int i =0;
    while(count0--)a[i++]=0;
    while(count1--)a[i++]=1;
    while(count2--)a[i++]=2;
    }
};
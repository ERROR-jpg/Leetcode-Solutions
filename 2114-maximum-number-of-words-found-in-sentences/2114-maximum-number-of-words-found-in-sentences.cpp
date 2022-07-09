class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int max=0, count;
        
        for(int i =0; i<s.size();i++){
            count = 0;
            for(int j=0; j<s[i].size();j++){
                if(s[i][j]==' '){
                    count++;
                }
            }
            if(count>max){
                max=count;
            }
        }
        return max+1;
    }
};
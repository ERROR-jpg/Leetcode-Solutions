class Solution {
public:
    int countGoodSubstrings(string s) {
        int count = 0;
        if(s.size()<3) return 0;
        for(int i = 0; i<s.length()-2;i++){
            set<char> st;
            {
                for (int j = i; j<i+3;j++){
                    char ch = s[j];
                    st.emplace(ch);
                }
                if(st.size()==3){
                    count++;
                }
            }
        }
        return count;
    }
};
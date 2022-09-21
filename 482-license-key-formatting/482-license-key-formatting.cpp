class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        stack<char> st;
        string result;
        int count = 0;
        for(auto c: s){
            if(c!='-'){
                st.push(toupper(c));
            }
        }
        
        while(!st.empty()){
            result+=st.top();
            st.pop();
            count++;
            if(count==k && !st.empty()){
                result+='-';
                count = 0;
            }
        }
        
        reverse(result.begin(), result.end());
        
        return result;
    }
};
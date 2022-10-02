class Solution {
public:
    bool isAnagram(string s1, string s2) {
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        if(s1.size()!=s2.size())

            return false;

        s1+=s1;

        if(s1.find(s2)<s1.size())

            return true;

        return false;
    }
};
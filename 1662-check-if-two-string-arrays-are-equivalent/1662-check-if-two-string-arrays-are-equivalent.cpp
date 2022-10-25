class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
         int n = word1.size(), m = word2.size();
        // pointer to the words in word1 and word2
        int i = 0, j = 0;
        // pointer to the character in `word1[i]` and `word2[j]`
        int x = 0, y = 0;
        while (i < n && j < m) {
            // if both character doesn't match, then return false
            // remember to increase the pointer x and y 
            // otherwise, it will cause TLE
            if (word1[i][x++] != word2[j][y++]) return false;
            // reach the end of the current word
            // move to another word
            // reset the pointer to 0 for the new word
            if (x == word1[i].size()) i += 1, x = 0;
            if (y == word2[j].size()) j += 1, y = 0;
        }
        // if they are equivalent, word pointers would be at position n and m 
        return i == n && j == m;
    }
    
};
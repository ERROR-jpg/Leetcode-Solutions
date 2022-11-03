class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string, int> count;
        
        for(const string&word : words){
            count[word]++;
        }
        
        int answer=0;
        bool central = false;
        
        for(const auto& [word, countOftheWord]: count){
            if(word[0]==word[1]){
                if(countOftheWord % 2 ==0){
                    answer+= countOftheWord;
                }else{
                    answer+= countOftheWord-1;
                    central = true;
                }
                
            }else if (word[0]<word[1] && count.count({word[1], word[0]})){
                answer += 2 * min(countOftheWord, count[{word[1], word[0]}]);
            }
        }
        
        if(central){
            answer++;
        }
        
        return 2 * answer;
    }
};
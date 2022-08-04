class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int size = letters.size();
        if(letters[size-1]<=target || target<letters[0]) return letters[0];
        char res;
        int start = 1;
        int end = letters.size()-1;
        
        while(start<=end){
            int mid = start +(end-start)/2;
            if(letters[mid]==target){
                start = mid+1;
            }else if(letters[mid]<target){
                start=mid+1;
            }else if(letters[mid]>target){
                res = letters[mid];
                end=mid-1;
            }
        }
        return res;
    }
};
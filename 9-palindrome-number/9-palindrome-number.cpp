class Solution {
public:
    bool isPalindrome(int n) {
       long int original = n,reversed = 0, remainder;
        if(n<0){
            return false;
        }
        while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
        if(original==reversed){
            return true;
        }else{
            return false;
        }

    }
};
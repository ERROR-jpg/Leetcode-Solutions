/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int ans;
        int start = 0, end = n;
        
        while(start<=end){
            int mid = start+(end-start)/2;
            int k = (guess(mid));
            if(k==-1){
                end = mid-1;
            }else if(k==1){
                start = mid+1;
            }else{
                return mid;
            }
        }
        return -1;
    }
};
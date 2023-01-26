class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fives = 0;
        int tens = 0;
        
        for(auto bill: bills){
            if(bill == 5){
                fives++;
            }else if(bill == 10){
                tens++;
                fives--;
            }else if(tens>0){
                tens--;
                fives--;
            }else{
                fives -=3;
            }
            if(fives < 0) return false;
        }
        return true;
    }
};
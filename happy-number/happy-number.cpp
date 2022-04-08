class Solution {
public:
    bool isHappy(int n) {
       set <int> set;
        int val;
        int index;
        
        while(1){
            val =0;
            while(n){
                index = n%10;
                val = val + (index * index);
                n = n/10;
            }
            if(val ==1)
                return true;
            else if(set.find(val)!=set.end())
                return false;
            
            set.insert(val);
            n = val;
        }
        return false;
      
    }
};
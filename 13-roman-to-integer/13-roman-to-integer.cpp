class Solution {
public:
    int romanToInt(string s) {
       map<char, int> rmap;
        rmap.insert(make_pair('I', 1));
        rmap.insert(make_pair('V', 5));
        rmap.insert(make_pair('X', 10));
        rmap.insert(make_pair('L', 50));
        rmap.insert(make_pair('C', 100));
        rmap.insert(make_pair('D', 500));
        rmap.insert(make_pair('M', 1000));

        int res = 0, size = s.size(), num;
        
        for(int i =0; i<size;){
            if(i==(size-1) || (rmap[s[i]]>=rmap[s[i+1]])){
                num = rmap[s[i]];
                i++;
            }else{
                num = rmap[s[i+1]] - rmap[s[i]];
                i+=2;
            }
            res+=num;
        }
           return res;
        
        
    }
};
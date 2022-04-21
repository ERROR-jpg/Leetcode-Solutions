class Solution {
public:
int countGoodSubstrings(string s) {
int i=0,j=0,count=0;
while(j<s.size()){
if(j-i+1<3)
j++;
else if(j-i+1==3){
if(s[i]!=s[i+1] && s[i+1]!=s[i+2] && s[i]!=s[i+2])
count++;
i++;
j++;
}
}
return count;
}
};
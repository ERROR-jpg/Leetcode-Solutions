class Solution {
public:
    int calPoints(vector<string>& ops) {
        int x;
        int y;
        stack<int> a;
        for(int i = 0; i<ops.size();i++){
            if (ops[i]=="C"){
                a.pop();
            }else if(ops[i]=="D"){
                a.push(a.top()*2);
            }else if(ops[i]=="+"){
                int x = a.top();
                a.pop();
                int y = x + a.top();   
                a.push(x);
                a.push(y);
            }else{
                a.push(stoi(ops[i]));
            }
        }
        int ans = 0;
        while(!a.empty()){
            ans += a.top();
            a.pop();
            
        }
        return ans;
    }
};
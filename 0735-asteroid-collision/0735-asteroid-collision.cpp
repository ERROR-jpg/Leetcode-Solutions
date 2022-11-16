class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stack;
        
        for(int i=0; i<asteroids.size(); i++){
            if(stack.empty() || asteroids[i]>0){
                stack.push(asteroids[i]);
            }else{
                while(true){
                    int peek = stack.top();
                    if(peek<0){
                        stack.push(asteroids[i]);
                        break;
                    }else if(peek == -asteroids[i]){
                        stack.pop();
                        break;
                    }
                    else if (peek>-asteroids[i]){
                        break;
                    }else {
                        stack.pop();
                        if(stack.empty()){
                            stack.push(asteroids[i]);
                            break;
                        }
                    }
                }
            }
        }        
        vector<int> ans(stack.size(), -1);
        for(int i = stack.size()-1; i>=0; i--){
            ans[i] = stack.top();
            stack.pop();
        }
        return ans;
    }
};
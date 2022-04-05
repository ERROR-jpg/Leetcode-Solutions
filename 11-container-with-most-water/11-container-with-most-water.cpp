class Solution {
public:
    int maxArea(vector<int>& height) {
        int leftp = 0;
        int rightp = height.size() -1;
        int max_area = 0;
        while(leftp<rightp){
            int width = rightp-leftp;
            int minlen = min(height[leftp], height[rightp]);
            int area = width  * minlen;
            max_area = max(max_area, area);
            if(height[leftp]<height[rightp]) leftp++;
            else if(height[leftp]>height[rightp]) rightp--;
            else{
                leftp++;
                rightp--;
            }
        }
        return max_area;
    }
};
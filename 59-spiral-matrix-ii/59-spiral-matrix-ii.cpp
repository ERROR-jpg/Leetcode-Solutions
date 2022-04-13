class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        
        vector<vector<int>> M(n,vector<int>(n,0));
        
        vector<vector<int>> D={{0,1},{1,0},{0,-1},{-1,0}};
        
        int x=0,y=0, r=0, x1,y1;
        for(int i=1;i<=n*n;i++)
        {
            
            M[x][y]=i;
            
            x1=x+D[r][0], y1=y+D[r][1];
            
            if(x1<0 || n<=x1 || y1<0 || n<=y1 || M[x1][y1]!=0)
            {
                r++;
                r=r%4;
                x=x+D[r][0], y=y+D[r][1];
            }
            else
            {
                x=x1;y=y1;
            }
            
        }
        
        
        
        return(M);
        
    }
};
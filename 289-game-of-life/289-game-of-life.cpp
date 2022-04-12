class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int row=board.size();
        int col=board[0].size();
        vector<vector<int>>grid(row,vector<int>(col));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(board[i][j]==0){
                    if(check(i,j,row,col,board))grid[i][j]=1;
                    else grid[i][j]=0;
                }
                else{
                    if(check(i,j,row,col,board))grid[i][j]=1;
                    else grid[i][j]=0;
                }
            }
        }
        board=grid;         //swaping the 2d arrays.
    }
    bool check(int row,int col,int m,int n,vector<vector<int>>&board){
        int count=0;
        for(int i=-1;i<=1;i++){
            for(int j=-1;j<=1;j++){
                if((row+i<0 || row+i>m-1) || (col+j<0 || col+j>n-1) || (i==0 && j==0))continue; 
				
				//\U0001f440if(i==0 && j==0) then we are getting the same box where we started, so we skipped it 
				//and other two are the boundary condition where we are checking if the index is out of bound or not\U0001f91e
               
			   if(board[row+i][col+j]==1)count++;
            }
        }
        if(board[row][col]==1){    //condition given in the question.
            if(count>=2 && count<=3)return true;
            return false;
        }
        else{                            // for board[row][col]==0 condition.
            if(count==3)return true;
            return false;
        }
        
    }
};


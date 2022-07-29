class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int columnsize = mat[0].size() -1;
        int rowsize = mat.size()-1;
        vector<int> answer;
        int i =0;
        int j =0;
        
        if(mat.size()==1){
            return mat[0];
        }else if(mat[0].size()==1){
            for(vector<int> value:mat){
                answer.push_back(value[0]);
            }
            return answer;
        }
        answer.push_back(mat[0][0]);
        
        while(i<=rowsize || j<=columnsize){
            if(i==0 && j<columnsize){
                j++;
                answer.push_back(mat[i][j]);
                while(j>0&&i!=rowsize){
                    j--;
                    i++;
                    answer.push_back(mat[i][j]);
                }
            }else if(j==0&&i<rowsize){
                i++;
                answer.push_back(mat[i][j]);
                while(i>0&&j!=columnsize){
                    i--;
                    j++;
                    answer.push_back(mat[i][j]);
                }
            }
            else if(j==columnsize&&i<rowsize){
                i++;
                answer.push_back(mat[i][j]);
                while(j>0&&i!=rowsize){
                    i++;
                    j--;
                    answer.push_back(mat[i][j]);
                }
            }
            else if(i==rowsize&&j<columnsize){
                j++;
                answer.push_back(mat[i][j]);
                while(i>0 && j!=columnsize){
                    i--;
                    j++;
                    answer.push_back(mat[i][j]);
                }
            }
            else{
                break;
            }
        }
        return answer;
    }
};
Ques:: 498. Diagonal Traverse
Given an m x n matrix mat, return an array of all the elements of the array in a diagonal order.

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
         if(mat.size()==0 && mat[0].size()==0)return {};
        int m = mat.size();
        int n = mat[0].size();
        vector<int>v(m*n);

        int row=0  , col=0; 
        bool up =1;
        int i=0;
        while(row<m && col<n){
            if(up){
                while(row>0 && col <n-1){
                v[i++] = (mat[row][col]);
                row--;
                col++;
                }
                v[i++] = (mat[row][col]);
                if(col== n-1)row++;
                else col++;
            }
            else{
                while(row<m-1 && col>0){
                    v[i++] = (mat[row][col]);
                    row++;
                    col--;
                }
                 v[i++] = (mat[row][col]);
                if(row==m-1)col++;
                else  row++;

            }
            up=!up;
           
        }
        return v;
    }
};
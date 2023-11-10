#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int R = mat[0].size();
        int C = mat.size();
        if(R*C != r*c) return mat;
        vector <vector <int>> new_mat(r,vector <int>(c,0));
        int row = 0, col = 0;
        for(int i = 0; i < C; i++){
            for(int j = 0; j < R; j++){
                if(col < c){
                    new_mat[row][col] = mat[i][j];
                    col++;
                }else{
                    row++;
                    col = 0;
                    new_mat[row][col] = mat[i][j];
                    col++;
                }
            }
        }
        return new_mat;
    }
};
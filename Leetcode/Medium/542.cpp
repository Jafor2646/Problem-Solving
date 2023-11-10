class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int r = mat.size(), c = mat[0].size();
        queue<pair<int,int>> q;
        int max = r*c;
        for(int i = 0; i<r; i++){
            for(int j = 0; j<c; j++){
                if(mat[i][j] == 0) q.push({i,j});
                else mat[i][j] = max;
            }
        }
        vector<pair<int,int>> direction = {{1,0},{-1,0}, {0,1},{0,-1}};
        while(!q.empty()){
            auto [row, col] = q.front();
            q.pop();
            for(auto [dr, dc] : direction){
                int m = row+dr, n = col+dc;
                if(m>=0 && m<r && n>=0 && n<c && mat[m][n] > mat[row][col]+1){
                    q.push({m,n});
                    mat[m][n] = mat[row][col] + 1;
                }
            }
        }
        return mat;
    }
};
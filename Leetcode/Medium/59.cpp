class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int count = 1;
        int total = n*n;
        int sr = 0;
        int sc = 0;
        int er = n-1;
        int ec = n-1;
        vector<vector<int>> result(n, vector<int>(n, 0));
        while(count <= total){
            for(int i = sc; count <= total && i<=ec; i++){
                result[sr][i] = count;
                count++;
            }
            sr++;
            for(int i = sr; count<=total && i<=er; i++){
                result[i][ec] = count;
                count++;
            }
            ec--;
            for(int i = ec; count <= total && i>=sc;i--){
                result[er][i] = count;
                count++;
            }
            er--;
            for(int i = er; count <= total && i>= sr; i--){
                result[i][sc] = count;
                count++;
            }
            sc++;
        }
        return result;
    }
};
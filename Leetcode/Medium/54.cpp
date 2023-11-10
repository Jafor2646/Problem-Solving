class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector <int> result;
        int r = matrix.size();
        int c = matrix[0].size();
        int sr = 0;
        int sc = 0;
        int er = r-1;
        int ec = c-1;
        int total = r*c;
        int count = 0;
        while(count < total){
            for(int i = sc; count < total && i<=ec; i++){
                result.push_back(matrix[sr][i]);
                count++;
            }
            sr++;
            for(int i = sr; count<total && i<=er; i++){
                result.push_back(matrix[i][ec]);
                count++;
            }
            ec--;
            for(int i = ec; count < total && i>=sc;i--){
                result.push_back(matrix[er][i]);
                count++;
            }
            er--;
            for(int i = er; count < total && i>= sr; i--){
                result.push_back(matrix[i][sc]);
                count++;
            }
            sc++;
        }
        return result;
    }
};
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row_mask[9][9] = {false};
        bool col_mask[9][9] = {false};
        bool area_mask[9][9] = {false};
        for(int r=0; r<board.size(); r++){
            for (int c=0; c<board[r].size(); c++){
                if (!isdigit(board[r][c])) continue;
                int idx =  board[r][c] - '0' - 1;
                if (row_mask[r][idx] == true){
                    return false;
                }
                row_mask[r][idx] = true;
                if (col_mask[c][idx] == true) {
                    return false;
                }
                col_mask[c][idx] = true;
                int area = (r/3) * 3 + (c/3);
                if (area_mask[area][idx] == true) {
                    return false;
                }
                area_mask[area][idx] = true;
            }
        }
        return true;
    }
};
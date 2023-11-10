class Solution {
public:
    vector<int> xc = {1,-1,0,0};
    vector<int> yc = {0,0,1,-1};
    bool dfs(vector<vector<char>>& board, string word, int i, int j, int idx, vector<vector<bool>> &visited){
       if(idx>=word.length()) return true;
       if(i>=board.size() || i<0 || j>=board[0].size() || j<0 || visited[i][j]==true || word[idx] != board[i][j]){
           return false;
       }
       visited[i][j] = true;
        for(int n = 0; n< xc.size();n++){
            int x = i+xc[n];
            int y = j+yc[n];
            bool ans = dfs(board, word, x, y, idx+1, visited);
            if(ans) return true;
        }
        visited[i][j] = false;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i = 0; i<board.size();i++){
            for(int j = 0; j<board[0].size();j++){
                if(board[i][j] == word[0]){
                    vector<vector<bool>> visited(board.size(),vector<bool>(board[0].size(), false));
                    bool ans = dfs(board,word,i, j, 0, visited);
                    if(ans) return true;
                }
            }
        }
        return false;
    }
};  
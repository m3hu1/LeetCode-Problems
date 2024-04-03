class Solution {
public:
    bool dfs(vector<vector<char>> &board, string word, int r, int c, int i) {
        int rows = board.size();
        int cols = board[0].size();
        if (i == word.size()) return true;
        if (r < 0 || c < 0 || r >= rows || c >= cols || word[i] != board[r][c]) {
            return false;
        }
        char temp = board[r][c];
        board[r][c] = '@';
        if (dfs(board, word, r + 1, c, i + 1) || dfs(board, word, r - 1, c, i + 1) || dfs(board, word, r, c + 1, i + 1) || dfs(board, word, r, c - 1, i + 1)) return true;
        board[r][c] = temp;
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int rows = board.size();
        int cols = board[0].size();
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (dfs(board, word, i, j, 0) == true) return true;
            }
        }
        return false;
    }
};
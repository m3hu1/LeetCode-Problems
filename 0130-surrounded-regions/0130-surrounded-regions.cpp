#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int rows = board.size();
        if (rows == 0) return;
        int cols = board[0].size();
        queue < pair<int, int>> q;
        for (int i = 0; i < rows; i++) {
            for (auto j : {0, cols - 1}) {
                if (board[i][j] == 'O') {
                    board[i][j] = '#';
                    q.push({i, j});
                }
            }
        }
        for (int i : {0, rows - 1}) {
            for (auto j = 0; j < cols; j++) {
                if (board[i][j] == 'O') {
                    board[i][j] = '#';
                    q.push({i, j});
                }
            }
        }
        vector <pair <int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        while (!q.empty()) {
            auto [x, y] = q.front();
            q.pop();
            for (auto [dx, dy] : directions) {
                int nx = x + dx, ny = y + dy;
                if (nx >= 0 && nx < rows && ny >= 0 && ny < cols && board[nx][ny] == 'O') {
                    board[nx][ny] = '#';
                    q.push({nx, ny});
                }
            }
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (board[i][j] == 'O') {
                    board[i][j] = 'X';
                }
                if (board[i][j] == '#') {
                    board[i][j] = 'O';
                }
            }
        }
    }
};

class Solution {
public:
    void helper(vector<vector<int>> &answer, int i, int j) {
        int maxi = INT_MIN;
        for (int x = 0; x < answer.size(); x++) {
            if (answer[x][j] > maxi) maxi = answer[x][j];
        }
        answer[i][j] = maxi;
    }

    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        vector<vector<int>> answer;
        int r = matrix.size();
        int c = matrix[0].size();
        answer = matrix;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (answer[i][j] == -1) {
                    helper(answer, i, j);
                }
            }
        }
        return answer;
    }
};
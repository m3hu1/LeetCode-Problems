class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i = 1;i<n;i++){
            for(int j = 0;j<n;j++){
                 matrix[i][j] +=min({
                    matrix[i-1][min(n-1,j+1)],
                    matrix[i-1][j],
                    matrix[i-1][max(0,j-1)]
                });
            }
        };
       return *min_element( matrix.back().begin(), matrix.back().end());
    }
};
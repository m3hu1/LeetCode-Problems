// m3hu1
class Solution {
public:
    int minTriangle(int row, int col, int n, vector<vector<int>>&triangle, vector<vector<int>>&dp){
        
        // base case
        if(row >= n) return 0;

        // check memoization
        if(dp[row][col] != -1) return dp[row][col];
        int sameIndex = triangle[row][col] + minTriangle(row+1,col,n,triangle,dp);
        int nextIndex = triangle[row][col] + minTriangle(row+1,col+1,n,triangle,dp);
        return dp[row][col] = min(sameIndex,nextIndex);

    }

    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();      
        vector<vector<int>> dp;
        for(int i=0;i<n;i++){
            dp.push_back(vector<int>(i+1,-1));
        }
        int minimumPathSum = minTriangle(0,0,n,triangle,dp);
        return minimumPathSum;
        
    }
};
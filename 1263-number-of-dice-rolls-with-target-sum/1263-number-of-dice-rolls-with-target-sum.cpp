class Solution {
public:
    int numRollsToTarget(int n, int k, int target) {
       vector<vector<long long int>> dp(n+1,vector<long long int>(target+1, 0));
        long long int mod = 1e9+7;
       for(int i = 1; i<=k && i <= target; i++){
           dp[1][i] = 1;
       }
       for(int i = 2; i<=n; i++){
           for(int j = 1; j<=target; j++){
               for(int x = 1; x<=k & x <=j; x++){
                   dp[i][j] += dp[i-1][j-x];
                   dp[i][j] %= mod;
               }
           }
       }
    return dp[n][target];
    }
};
// m3hu1
class Solution {
public:
    int K;
    int maxProfit(int k,vector<int>& prices) {
        K = k;
        vector<vector<vector<int>>> dp(prices.size(),vector<vector<int>>(2,vector<int>(k+1,-1)));
        return solve(0,1,0,prices,dp);

    }
    int solve(int i,int buy,int trans,vector<int>& prices,vector<vector<vector<int>>> &dp)
    {
        if(i == prices.size()) return 0;
        if(trans>K) return 0;
        if(dp[i][buy][trans]!=-1) return dp[i][buy][trans];
        int profit;
        if(buy)
        {
            profit = max((-prices[i]+solve(i+1,0,trans+1,prices,dp)),(solve(i+1,1,trans,prices,dp)));
        }
        else
        {
            profit = max((prices[i]+solve(i+1,1,trans,prices,dp)),(solve(i+1,0,trans,prices,dp)));
        }
        return dp[i][buy][trans] = profit;
    }
};
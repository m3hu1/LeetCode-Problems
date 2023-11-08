// m3hu1
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        const int n=prices.size();
        const int k=2;
        int dp[k+1];
        int maxScore[k+1];        
        for(int i=0; i<=k; ++i) {
            dp[i]=0;
            maxScore[i]=dp[i]-prices[0];
        }
        //
        for(int i=1; i<n; ++i) {
            //
            for(int left=1; left<=k; ++left) {
                dp[left]=max(
                    dp[left],
                    prices[i]+maxScore[left]
                );
                maxScore[left]=max(maxScore[left], dp[left-1]-prices[i]);
            }
        }
        //
        int localMax=0;
        for(int i=0; i<=k; ++i) {
            localMax=max(localMax, dp[k]);
        }
        return localMax;
    }
};
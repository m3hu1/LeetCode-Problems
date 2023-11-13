// m3hu1
class Solution {
public:
int rec(int index , vector<int>& nums , vector<int>& dp){
    int ans = 1;
    if(dp[index]!= -1) return dp[index];

    for(int j = 0 ; j < index; j++){
        if(nums[j] < nums[index]){
            ans = max(ans , 1 + rec(j , nums , dp));
        }
    }

    return dp[index] =  ans;
}
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int ans = 1;
        vector<int> dp(n+1, 0);
        for(int i = 0 ; i < n; i++){
            for(int j = 0 ;j < i;  j++){

                if(nums[j] < nums[i]){
                    dp[i] = max(dp[i] , 1 + dp[j]);
                }
            }
        }
        for(int i = 0 ; i < n; i++){
            dp[n] = max(dp[i] , dp[n]);
        }
        return dp[n]+1;
    }
};
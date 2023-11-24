// m3hu1
class Solution {
public:
    // 1---n
    //n-1---n-1
    // 1 -n ---2
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        vector<int> pref(n),suff(n);
        vector<int> maxPref(n,INT_MIN),maxSuff(n,INT_MIN);
        vector<int> dp(n,INT_MIN);
        dp[0] = nums[0];
        int ans = dp[0];
        pref[0] = nums[0];
        suff[n-1] = nums[n-1];
        maxPref[0] = pref[0]; 
        maxSuff[n-1] = suff[n-1];
        for(int i=1;i<n;i++){
            dp[i] = max(dp[i-1]+nums[i],nums[i]);
            ans = max(dp[i],ans);
            pref[i] = pref[i-1]+nums[i];
            maxPref[i] = max(maxPref[i-1],pref[i]);
            suff[n-i-1]= suff[n-i]+nums[n-i-1];
            maxSuff[n-i-1] = max(maxSuff[n-i],suff[n-i-1]);
        }
        for(int i=0;i<n-1;i++){
            ans = max(ans,maxPref[i]+maxSuff[i+1]);
        }
        return ans;
    }
};
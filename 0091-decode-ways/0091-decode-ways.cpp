class Solution {
public:
    int numDecodings(string s) {
        int m=s.size(); 
        vector<int>dp(m+1, 0); 
        dp[m] = 1; 
        for (int i=m-1;i>=0;--i) 
            if (s[i]!='0') {
                dp[i]=dp[i+1]; 
                if (i+1<m&&s.substr(i,2)<="26")dp[i]+=dp[i+2]; 
            } 
        return dp[0]; 
    }
};
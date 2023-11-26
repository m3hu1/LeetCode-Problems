// m3hu1
class Solution {
public:
    // int lcs(string s1,string s2,int m,int n){
    //     vector<vector<int>>dp(m+1,vector<int>(n,0));
    //     for(int i=0;i<=m;i++) dp[i][0]=0;
    //     for(int i=0;i<=n;i++){
    //         dp[0][i]=0;
    //     }
    //     for(int i=1;i<=m;i++){
    //         for(int j=1;j<=n;j++){
    //             if(s1[i-1]==s2[j-1]) dp[i][j]=1+dp[i-1][j-1];
    //             else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
    //         }
    //     }
    //     return dp[m][n];
    // }
    int count(string s1,string s2,int i,int j){
        if(j<0) return 1;
        if(i<0) return 0;
        if(s1[i]==s2[j])
        return count(s1,s2,i-1,j-1)+count(s1,s2,i-1,j);
        return count(s1,s2,i-1,j);
    }
    int numDistinct(string s, string t) {
        int n=s.length();
        int m=t.length();
        // vector<vector<double>>dp(n+1,vector<double>(m+1,0));
        // return count(s,t,n-1,m-1);
        // for(int i=0;i<=m;i++) dp[0][i]=0;
        // for(int i=0;i<=n;i++) dp[i][0]=1;
        vector<double>prev(m+1,0);
        prev[0]=1;
        for(int i=1;i<=n;i++){
            vector<double>curr(m+1,0);
            curr[0]=1;
            for(int j=1;j<=m;j++){
                if(s[i-1]==t[j-1]){
                    curr[j]=prev[j-1]+prev[j];
                }
                else curr[j]=prev[j];
            }
            prev=curr;
        }
        return (int)prev[m];
    }
};
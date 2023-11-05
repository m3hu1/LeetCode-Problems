// m3hu1
class Solution {
public:
    void dfs(vector<vector<int>>& isConnected,int i,int n,vector<int> &vis)
    {
        vis[i]=1;
        for(int j=1;j<=n;j++)
        {
            if(isConnected[i-1][j-1]==1&&vis[j]!=1)
            dfs(isConnected,j,n,vis);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) 
    {
        int n=isConnected.size();
       vector<int> vis(n+1,0);
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==0)
            {
                dfs(isConnected,i,n,vis);
                cnt++;
            }
        }
        return cnt;
    }
};
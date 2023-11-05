// m3hu1
class Solution {
public:
int cnt=0;
void dfs(int node,vector<int>&vis, vector<vector<pair<int,int>>>&adj)
{
    vis[node]=1;
    for(auto i:adj[node])
    {
        if(!vis[i.first])
        {
            if(i.second==1)
            {
                cnt++;
            }
            dfs(i.first,vis,adj);
        }
    }
}
    int minReorder(int n, vector<vector<int>>& con) {
            vector<vector<pair<int,int>>>adj(n);
            for(auto i:con)
            {
                adj[i[0]].push_back({i[1],1}); 
                adj[i[1]].push_back({i[0],0});
            }
            vector<int>vis(n,0);
            dfs(0,vis,adj);
            return cnt;
    }
};
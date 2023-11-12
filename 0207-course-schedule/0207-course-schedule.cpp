// m3hu1
class Solution {
public:
     bool dfs(int i, int V, vector<int> &vis , vector<int> &dfsv,vector<int> adj[])
    {
        vis[i] = 1;
        dfsv[i] =1;
        for(auto ans : adj[i])
        {
            if(vis[ans] == 0)
            {
                bool c = dfs(ans, V,vis,dfsv,adj);
                if(c==true)
                {
                    return true;
                }
            }
            else if(dfsv[ans])
            {
                return true;
            }
        }
        dfsv[i] = 0;
        return false;
    }
    bool canFinish(int V, vector<vector<int>>& pp) {
        
        vector<int> adj[V];
        for(int i = 0;i<pp.size();i++)
        {
            int aa = pp[i][1];
            int bb = pp[i][0];
            adj[aa].push_back(bb);
        }
        vector<int> vis(V,0);
        vector<int> dfsv(V,0);
        for(int i=0;i<V;i++)
        {
            if(vis[i] == 0)
            {
                bool ans =dfs(i, V,vis,dfsv,adj);
                if(ans == true)
                {
                    return false;
                }
            }
        }
        return true;
    }
};
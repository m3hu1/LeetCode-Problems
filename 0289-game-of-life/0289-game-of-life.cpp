// m3hu1
class Solution {
public:
    void gameOfLife(vector<vector<int>>& g) {
        const vector<int> dx{-1, -1, 0, 1, 1, 1, 0, -1};
        const vector<int> dy{ 0, 1, 1, 1, 0, -1, -1, -1};

        int n = g.size(), m = g[0].size();
        vector<vector<int>> G(n, vector<int>(m));

        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
                int c1 = 0, c0 = 0;
                int nx, ny;
                for(int k=0; k<8; ++k){
                    nx = i+dx[k];
                    ny = j+dy[k];
                    if(0<=nx && nx<n && 0<=ny && ny<m ) {
                        if(g[nx][ny]) ++c1;
                        else ++c0;
                    }
                }
                if(g[i][j]==1 && c1 < 2) G[i][j] = 0;
                else if (g[i][j]==1 && (c1==2 || c1==3))  G[i][j]=1;
                else if (g[i][j]==1 && c1>3) G[i][j] = 0;
                else if (g[i][j]==0 && c1==3) G[i][j] = 1;
            }
        }

        g = G;
    }

};
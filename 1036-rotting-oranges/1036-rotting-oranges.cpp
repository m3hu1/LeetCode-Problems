// m3hu1
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<pair<int,int>,int>>  q;
       vector<vector<int>> vis(n,vector<int>(m,0));
       int fresh=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j]=2;
                }else if(grid[i][j]==1){
                         fresh++;
                }
            }
        }

        int time=0;
        int drow[]={-1,1,0,0};
        int dcol[]={0,0,-1,1};
        int _CountingHowManyOrngRotten=0;
        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int tm=q.front().second;
            q.pop();
            time=max(time,tm);
            for(int i=0;i<4;i++){
                int nrow=row+drow[i];
                int ncol=col+dcol[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m &&vis[nrow][ncol]==0&& grid[nrow][ncol]==1){
                    q.push({{nrow,ncol},time+1});
                    vis[nrow][ncol]=2;
                    _CountingHowManyOrngRotten++;
                }
            }
        }

    return (_CountingHowManyOrngRotten==fresh)?time:-1;
    }
};
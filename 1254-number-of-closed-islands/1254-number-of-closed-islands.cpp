class Solution {
public:
    bool dfs(vector<vector<int>>& grid, int x, int y, int r, int c){
        if(x<0||y<0||x>=r||y>=c){
            return false;
        }
        if(grid[x][y]==1){
            return true;
        }
        grid[x][y]=1;
        bool down = dfs(grid,x+1,y,r,c);
        bool right = dfs(grid,x,y+1,r,c);
        bool top = dfs(grid,x-1,y,r,c);
        bool left = dfs(grid,x,y-1,r,c);
        return down && right && top && left;
    }
    int closedIsland(vector<vector<int>>& grid) {
        int cnt = 0;
        int rows = grid.size();
        if(rows == 0) return 0;
        int cols = grid[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]==0){
                    if(dfs(grid,i,j,rows,cols)){
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};
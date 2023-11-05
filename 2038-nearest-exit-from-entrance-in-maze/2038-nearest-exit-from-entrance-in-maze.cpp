// m3hu1
class Solution {
public:
  int nearestExit(vector<vector<char>>& grid, vector<int>& e) {
    int y= grid.size() ,yend= grid.size() - 1, x= grid[0].size() ,xend= grid[0].size() - 1, answer = 0;
    
        queue<tuple<int,int,int>> q;
        q.push({e[0], e[1], 0});
    
        while(!q.empty()){
          auto [cy,cx, w] = q.front(); q.pop();
          if(grid[cy][cx] == '+') continue;
          grid[cy][cx] = '+';
          if(cy == 0 || cy == yend || cx == 0 || cx == xend ){
            if(cy == e[0] && cx == e[1]);
            else return w;
          }
          w++;
          if(cy && grid[cy-1][cx] == '.') q.push({cy-1,cx,w});
          if(cy != yend && grid[cy+1][cx] == '.') q.push({cy+1,cx,w});
          if(cx && grid[cy][cx-1] == '.') q.push({cy,cx-1,w});
          if(cx != xend && grid[cy][cx+1] == '.') q.push({cy,cx+1,w});
        }
    return -1;      
  }
};
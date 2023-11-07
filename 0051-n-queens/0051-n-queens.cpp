// m3hu1
int dig1[20];
int dig2[20];
int v[10];
class Solution {
public:
vector<vector<string>>ans;
int fn(int i,vector<string>&board,int n){
    if(i==n) {
        ans.push_back(board);
        return 1;
    }
    bool t=0;
    for(int j=0;j<n;j++){
        if(!v[j] and !dig1[i-j+10] and !dig2[i+j] and board[i][j]=='.'){
            board[i][j]='Q';
            v[j]=1;
            dig1[i-j+10]=1;
            dig2[i+j]=1;
            t|= fn(i+1,board,n);
            v[j]=0;
            dig1[i-j+10]=0;
            dig2[i+j]=0;
            board[i][j]='.';
        }
    }
    return t;
}
    vector<vector<string>> solveNQueens(int n) {
        memset(v,0,sizeof(v));
        memset(dig1,0,sizeof(dig1));
        memset(dig2,0,sizeof(dig2));
        vector<string>board;
        string c="";
        for(int i=0;i<n;i++){
            c+='.';
        }
        for(int i=0;i<n;i++){
            board.push_back(c);
        }
        fn(0,board,n);
        return ans;
    }
};
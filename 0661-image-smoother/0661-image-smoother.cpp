class Solution {
public:
    int averager(int i,int j,vector<vector<int>>&a){
        int ct=1,sum=a[i][j];
        int dr[8]={1,0,0,-1,-1,-1,1,1};
        int dc[8]={0,-1,1,0,-1,1,-1,1};
        for(int k=0;k<8;k++){
            int r=i+dr[k];int c=j+dc[k];
            if(r>=0 && r<a.size() && c>=0 && c<a[0].size()){
                ct++;sum+=a[r][c];
            }
        }
        return (sum/ct);
    }
    vector<vector<int>> imageSmoother(vector<vector<int>>& a) {
        vector<vector<int>>b(a.size(),vector<int>(a[0].size(),0));
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a[0].size();j++){
                b[i][j]=averager(i,j,a);
            }
        }
        return b;
    }
};
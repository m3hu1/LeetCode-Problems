// m3hu1
class Solution {
public:
    int K;
    void solve(int i,int t,vector<int>& ds,vector<vector<int>>& ans)
    {   
        if(t == 0 && ds.size() == K){
            ans.push_back(ds);
            return;
        }
        if(i>9) return;
        if(t>=i){
          ds.push_back(i);
          solve(i+1,t-i,ds,ans);
          ds.pop_back();
          solve(i+1,t,ds,ans); 
        }
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        K = k;
        vector<vector<int>> ans;
        vector<int>ds;
        solve(1,n,ds,ans);

        return ans;
    }
};
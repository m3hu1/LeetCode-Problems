// m3hu1
class Solution {
public:

    void dfs(int a,int b,vector<vector<pair<int,double>>>&graf,bool &f,double &ret,vector<int>&vis,double &anz){
        if(vis[a]) return;
        vis[a] = 1;
        if(a==b){
            f = true;
            anz = ret;
            return;
        }
        for(auto p:graf[a]){
            int x = p.first;
            double d = p.second;
            ret *= d;
            dfs(x,b,graf,f,ret,vis,anz);
            ret /= d;
        }
    }

    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        unordered_map<string,int> mp;
        int k = 0;
        for(auto v:equations){
            if(mp.find(v[0])==mp.end()){
                mp[v[0]] = k;
                k++;
            }
            if(mp.find(v[1])==mp.end()){
                mp[v[1]] = k;
                k++;
            }
        }
        int n = mp.size();
        vector<vector<pair<int,double>>> graf(n);
        for(int i=0;i<equations.size();i++){
            int x = mp[equations[i][0]];
            int y = mp[equations[i][1]];
            double d = values[i];
            graf[x].push_back({y,d});
            graf[y].push_back({x,1/d});
        }
        vector<double> ans;
        for(auto q:queries){
            string a = q[0];
            string b = q[1];
            if(mp.find(a)==mp.end() || mp.find(b)==mp.end()){
                ans.push_back(-1.00000);
                continue;
            }
            vector<int> vis(n,0);
            double ret = 1;
            bool f = false;
            double anz;
            dfs(mp[a],mp[b],graf,f,ret,vis,anz);
            if(f) ans.push_back(anz);
            else ans.push_back(-1.00000);
        }
        return ans;
    }
};
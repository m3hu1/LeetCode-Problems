// m3hu1
class Solution {
public:
    vector<int> findOrder(int nc, vector<vector<int>>& pq) {
        vector<int> adj[nc];
        for(int i=0; i<pq.size(); i++) {
            adj[pq[i][1]].push_back(pq[i][0]);
        }

        vector<int> indegree(nc,0);
        for(int i=0; i<pq.size(); i++) {
            indegree[pq[i][0]]++;
        }

        queue<int> q;
        vector<int> ans;
        for(int i=0; i<nc; i++) {
            if(indegree[i]==0)
                q.push(i);
        }

        while(!q.empty()) {
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for(auto it:adj[node]) {
                indegree[it]--;
                if(indegree[it]==0) {
                    q.push(it);
                }
            }
        }

        if(ans.size()==nc) return ans;
        return {};
    }
};
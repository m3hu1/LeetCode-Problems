class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector <int> ans;
        queue <int> q;
        unordered_map <int, vector <int>> rev;
        vector <int> out(graph.size(), 0);
        for (int i = 0; i < graph.size(); i++) {
            if (graph[i].empty()) {
                q.push(i);
            }
            for (auto nei : graph[i]) {
                rev[nei].push_back(i);
            }
            out[i] = graph[i].size();
        }
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for (auto nei : rev[node]) {
                out[nei]--;
                if (out[nei] == 0) {
                    q.push(nei);
                }
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        vector <int> color(graph.size(), -1);
        for (int i = 0; i < graph.size(); i++) {
            if (color[i] == -1) {
                queue <int> q;
                q.push(i);
                color[i] = 0;
                while (!q.empty()) {
                    int node = q.front();
                    q.pop();
                    for (auto nei : graph[node]) {
                        if (color[nei] == -1) {
                            color[nei] = !color[node];
                            q.push(nei);
                        } else if (color[nei] == color[node]) return false;
                    }
                }
            }
        }
        return true;
    }
};
// m3hu1
class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        const int range = 100000;
        const int n = range - ( -range ) + 5;
        int indegree[n]; memset(indegree, 0, sizeof(indegree));
        int graph[n][2]; memset(graph, n, sizeof(graph));
        for(auto& pair: adjacentPairs) {
            int u = pair[0] + range;
            int v = pair[1] + range;
            graph[u][indegree[u]] = v;
            graph[v][indegree[v]] = u;
            indegree[u]++;
            indegree[v]++;
        }
        vector<int> nums;
        for(int i=0; i<n; i++) {
            if(indegree[i] == 1) {
                nums.push_back(i-range);
                break;
            }
        }
        for(int i=0; i<adjacentPairs.size(); i++) {
            int curr = nums.back() + range;
            indegree[curr] = 0; 

            for(int j=0; j<2; j++) {
                int neighbour = graph[curr][j];
                if(neighbour < n && indegree[neighbour])
                    nums.push_back(neighbour-range);
            }
        }
        return nums;
    }
};
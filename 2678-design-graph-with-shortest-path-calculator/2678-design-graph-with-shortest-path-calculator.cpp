// m3hu1
class Graph {
private:
    vector<vector<int>> distance;
    int n;
    const int MAX_VALUE = 500'000'000;
public:
    Graph(int n, vector<vector<int>>& edges) {
        this->n = n;
        distance = vector<vector<int>>(n, vector<int>(n, MAX_VALUE));
        for (int i = 0; i < n; i++) {
            distance[i][i] = 0;
        }
        for (auto& edge : edges) {
            distance[edge[0]][edge[1]] = edge[2];
        }
        for (int k = 0; k < n; k++) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    distance[i][j] = min(
                        distance[i][j],
                        distance[i][k] + distance[k][j]
                    );
                }
            }
        }
    }
    void addEdge(vector<int> edge) {
        if (distance[edge[0]][edge[1]] <= edge[2]) {
            return;
        }
        distance[edge[0]][edge[1]] = edge[2];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                distance[i][j] = min(
                    distance[i][j],
                    distance[i][edge[0]] + edge[2] + distance[edge[1]][j]
                );
            }
        }
    }
    int shortestPath(int node1, int node2) {
        if (distance[node1][node2] == MAX_VALUE) {
            return -1;
        }
        return distance[node1][node2];
    }
};
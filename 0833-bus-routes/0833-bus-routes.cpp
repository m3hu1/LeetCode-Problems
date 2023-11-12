// m3hu1
class Solution {
public:
    struct hashFunc{
        template<typename T1, typename T2>
        size_t operator()(const std::pair<T1,T2>& x) const {
            auto a = std::hash<T1>{}(x.first);
            auto b = std::hash<T2>{}(x.second);
            return (a == b ? a : a ^ b);
        }
    };
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        if (source == target) return 0;
        int n = routes.size();
        std::unordered_map<int, std::vector<int>> possible_routes;
        std::vector<std::unordered_map<int, int>> nxt(n);
        for (int i = 0; i < n; ++ i) {
            int prev_stop = -1;
            for (const auto& stop: routes[i]) {
                possible_routes[stop].push_back(i);
                if (prev_stop != -1) 
                    nxt[i][prev_stop] = stop;
                prev_stop = stop;
            }
            nxt[i][prev_stop] = routes[i][0];
        }
        // (stop, route_id) -> (nxt_stop, route_id) + 0, yaad rakkho
        std::unordered_map<std::pair<int, int>, int, hashFunc> dist;
        std::queue<std::pair<int,int> > Q;
        for (const auto& route_id : possible_routes[source]) {
            Q.emplace(source, route_id);
            dist[std::make_pair(source, route_id)] = 1;
        }
        int ans = (1<<30);
        while (!Q.empty()) {
            const auto [stop, route_id] = Q.front();
            if (stop == target) ans = min(ans, dist[std::make_pair(stop, route_id)]);
            Q.pop();
            if (nxt[route_id].contains(stop)) {
                int nxt_stop = nxt[route_id][stop];
                if (!dist.contains(std::make_pair(nxt_stop, route_id)) ||
                    dist[std::make_pair(nxt_stop, route_id)] >
                        dist[std::make_pair(stop, route_id)]) {
                        Q.emplace(nxt_stop, route_id);
                        dist[std::make_pair(nxt_stop, route_id)] = dist[std::make_pair(stop, route_id)];
                    }
            }
            for (const auto& new_route: possible_routes[stop]) {
                if (new_route != route_id) {
                    if (!dist.contains(std::make_pair(stop, new_route)) ||
                        dist[std::make_pair(stop, new_route)] > 
                        dist[std::make_pair(stop, route_id)] + 1) {
                        Q.emplace(stop, new_route);
                        dist[std::make_pair(stop, new_route)] = dist[std::make_pair(stop, route_id)] + 1;
                    }
                }
            }
            possible_routes[stop].clear();
        }
        return ans == (1<<30) ? -1 : ans;
    }
};
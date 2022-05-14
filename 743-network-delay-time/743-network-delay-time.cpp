class Solution {
    using Graph = std::vector<std::set<std::pair<int, int>>>;
    const int INF = numeric_limits<int>::max();
public:
    int networkDelayTime(vector<vector<int>> &times, int n, int k) {
        Graph graph(n);
        for (auto &edge : times)
            graph[edge[0] - 1].emplace(edge[1] - 1, edge[2]);
        std::vector<int> distance(n, INF);
        std::set<std::pair<int, int>> queue; // <distance, node>
        distance[k - 1] = 0;
        queue.emplace(distance[k - 1], k - 1);
        while (!queue.empty()) {  // Uniform cost search
            auto[dist, node] = queue.extract(queue.begin()).value();
            for (auto[next_node, edge_time] : graph[node])
                if (distance[next_node] > dist + edge_time) {
                    queue.erase({distance[next_node], next_node});
                    distance[next_node] = dist + edge_time;
                    queue.emplace(distance[next_node], next_node);
                }
        }
        int max_time{-1};
        for (auto d: distance)
            if (d == INF) return -1;
            else max_time = std::max(max_time, d);
        return max_time;
    }
};
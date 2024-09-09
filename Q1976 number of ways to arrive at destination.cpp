class Solution {
public:
 const int MOD = 1e9 + 7;

    vector<int> bfs(int n, vector<vector<pair<int, int>>>& adj) {
        vector<long long> dist(n, LONG_MAX);
        vector<int> ways(n, 0);
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;

        // Initialize source
        dist[0] = 0;
        ways[0] = 1;
        pq.push({0, 0}); // (distance, node)

        while (!pq.empty()) {
            auto [currDist, node] = pq.top();
            pq.pop();

            if (currDist > dist[node]) continue;

            for (auto [neighbor, time] : adj[node]) {
                long long newDist = currDist + time;
                if (newDist < dist[neighbor]) {
                    dist[neighbor] = newDist;
                    ways[neighbor] = ways[node];
                    pq.push({newDist, neighbor});
                } else if (newDist == dist[neighbor]) {
                    ways[neighbor] = (ways[neighbor] + ways[node]) % MOD;
                }
            }
        }

        return ways;
    }
    int countPaths(int n, vector<vector<int>>& roads) {
         vector<vector<pair<int, int>>> adj(n);
        for (auto& road : roads) {
            int u = road[0], v = road[1], time = road[2];
            adj[u].emplace_back(v, time);
            adj[v].emplace_back(u, time); 
        }

        vector<int> ways = bfs(n, adj);

        return ways[n - 1];
    }
};



class Solution {
    const int DR[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    const int DC[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
    const int INF = 1e9;
    int n;
    
    bool inside(int r, int c) {
        return (r >= 0 && c >= 0 && r < n && c < n);
    }
    
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        n = grid.size();
        if (grid[0][0] || grid[n - 1][n - 1]) return -1;
        vector<vector<int>> g(n, vector<int>(n, INF));
        vector<vector<int>> h(n, vector<int>(n));
        for (int r = 0; r < n; r++) for (int c = 0; c < n; c++) {
            h[r][c] = max(n - 1 - r, n - 1 - c);
        }
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<>> pq;
        g[0][0] = 1;
        pq.push({g[0][0] + h[0][0], {0, 0}});
        int ans = INF;
        while (!pq.empty()) {
            auto [d, u] = pq.top(); pq.pop();
            if (d >= g[n - 1][n - 1]) return g[n - 1][n - 1];
            int r0 = u.first, c0 = u.second, d0 = d - h[r0][c0];
            if (d0 > g[r0][c0]) continue;
            if (r0 == n - 1 && c0 == n - 1) continue;
            for (int i = 0; i < 8; i++) {
                int r = r0 + DR[i], c = c0 + DC[i], d = d0 + 1;
                if (inside(r, c) && !grid[r][c] && g[r][c] > d) {
                    g[r][c] = d;
                    pq.push({g[r][c] + h[r][c], {r, c}});
                }
            }
        }
        return -1;
    }
    
    int BFSshortestPathBinaryMatrix(vector<vector<int>>& grid) {
        n = grid.size(); n = grid[0].size();
        if (grid[0][0] || grid[n - 1][n - 1]) return -1;
        if (n == 1) return 1;
        vector<vector<bool>> done(n, vector<bool>(n));
        queue<pair<int, int>> q;
        q.push({0, 0});
        done[0][0] = true;
        int ans = 1;
        while (!q.empty()) {
            ans++;
            for (int i = q.size(); i > 0; i--) {
                pair<int, int> u = q.front(); q.pop();
                for (int i = 0; i < 8; i++) {
                    int r = u.first + DR[i], c = u.second + DC[i];
                    if (r == n - 1 && c == n - 1) return ans;
                    if (inside(r, c) && !grid[r][c] && !done[r][c]) {
                        done[r][c] = true;
                        q.push({r, c});
                    }
                }
             }
        }
        return -1;
    }
};
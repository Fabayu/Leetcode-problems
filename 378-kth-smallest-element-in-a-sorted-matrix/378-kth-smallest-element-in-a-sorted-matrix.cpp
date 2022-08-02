class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int m = matrix.size();
        auto comp = [&matrix](pair<int, int> a, pair<int, int> b) {
            return matrix[a.first][a.second] > matrix[b.first][b.second];
        };
        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(comp)>
            min_heap(comp);
        for (int j = 0; j <= m - 1; j++) {
            min_heap.emplace(0, j);
        }
        for (int i = 0; i < k - 1; i++) {
            auto temp = min_heap.top();
            min_heap.pop();
            if (temp.first != m - 1) {
                min_heap.emplace(temp.first + 1, temp.second);
            }
        }
        return matrix[min_heap.top().first][min_heap.top().second]; 
    }
};
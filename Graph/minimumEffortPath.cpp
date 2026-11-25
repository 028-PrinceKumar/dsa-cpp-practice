
class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int m = heights.size();
        int n = heights[0].size();

        vector<vector<int>> effort(
            m, vector<int>(n, INT_MAX)
        );

        // {effort, row, col}
        priority_queue<
            tuple<int, int, int>,
            vector<tuple<int, int, int>>,
            greater<tuple<int, int, int>>
        > pq;

        effort[0][0] = 0;
        pq.push({0, 0, 0});

        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};

        while (!pq.empty()) {
            auto [currEffort, x, y] = pq.top();
            pq.pop();

            // Ignore outdated entries
            if (currEffort > effort[x][y])
                continue;

            // Destination reached
            if (x == m - 1 && y == n - 1)
                return currEffort;

            for (int i = 0; i < 4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if (nx < 0 || ny < 0 ||
                    nx >= m || ny >= n)
                    continue;

                int diff = abs(
                    heights[x][y] - heights[nx][ny]
                );

                int newEffort = max(currEffort, diff);

                if (newEffort < effort[nx][ny]) {
                    effort[nx][ny] = newEffort;

                    pq.push({
                        newEffort, nx, ny
                    });
                }
            }
        }

        return 0;
    }
};

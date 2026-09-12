// Problem: Topological Sort using Kahn's Algorithm
// Difficulty: Medium
// Approach:Iterative
// Time Complexity: O(n+e)
// Space Complexity: O(n)

vector<int> topologicalSort(vector<vector<int>>& edges, int v, int e) {

    // 1. Create adjacency list
    unordered_map<int, list<int>> adj;

    for (int i = 0; i < e; i++) {
        int u = edges[i][0];
        int node = edges[i][1];

        adj[u].push_back(node);
    }

    // 2. Find indegree of every vertex
    vector<int> indegree(v, 0);

    for (auto i : adj) {
        for (auto j : i.second) {
            indegree[j]++;
        }
    }

    // 3. Put all vertices with indegree 0 into queue
    queue<int> q;

    for (int i = 0; i < v; i++) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }

    // 4. BFS
    vector<int> ans;

    while (!q.empty()) {

        int front = q.front();
        q.pop();

        // Store vertex
        ans.push_back(front);

        // Reduce indegree of neighbours
        for (auto neighbour : adj[front]) {

            indegree[neighbour]--;

            if (indegree[neighbour] == 0) {
                q.push(neighbour);
            }
        }
    }

    // 5. Cycle detection
    if (ans.size() != v) {
        return {};
    }

    return ans;
}

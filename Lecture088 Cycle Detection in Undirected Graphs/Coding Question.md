# Coding Quesion

1. Cycle Detection In Undirected Graph: [https://www.codingninjas.com/studio/problems/cycle-detection-in-undirected-graph_1062670?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar]

``` cpp
1.                                  //Depth First Search
    bool isCycleDFS (int node, int parent, unordered_map <int, list <int>> &adj, unordered_map <int, bool> &visited) {

    visited[node] = 1;

    for(auto neighbour: adj[node]) {

        if (!visited[neighbour]) {
            bool ans = isCycleDFS(neighbour, node, adj, visited);

            if(ans)
                return true;
        }

        else if(neighbour != parent)
            return true;
    }
    return false;
}

string cycleDetection (vector<vector<int>>& edges, int n, int m) {
    // create an adjacency list
    unordered_map <int, list <int>> adj;
    for (int i = 0; i < m; i++) {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // for disconnected graph
    unordered_map <int, bool> visited;
    for(int i = 0; i < n; i++){

        if (!visited[i]) {
            bool ans = isCycleDFS(i, -1, adj, visited);

            if (ans == 1)
                return "Yes";
        }
    }
    return "No";
}
```

``` cpp
                                    // Breadth First Search
    bool isCycle (int src, unordered_map <int, list <int>> &adj, unordered_map <int, bool> &visited) {

    unordered_map <int, int> parent;
    parent[src] = -1;
    visited[src] = 1;
    queue <int> q;
    q.push(src);

    while(!q.empty()) {

        int front = q.front();
        q.pop();
        for (auto neighbour : adj[front]) {
            if (visited[neighbour] == 1 && neighbour != parent[front])
                return true;
            
            else if (!visited[neighbour]) {
                q.push(neighbour);
                visited[neighbour] = 1;
                parent[neighbour] = front;
            }
            }
        }
    return false;
}

string cycleDetection (vector<vector<int>>& edges, int n, int m) {
    // create an adjacency list
    unordered_map <int, list <int>> adj;
    for (int i = 0; i < m; i++) {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // for disconnected graph
    unordered_map <int, bool> visited;
    for(int i = 0; i < n; i++){

        if (!visited[i]) {
            bool ans = isCycle(i, adj, visited);

            if (ans == 1)
                return "Yes";
        }
    }
    return "No";
}
```

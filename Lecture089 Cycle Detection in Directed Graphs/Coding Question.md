# Coding Quesion

1. Detect Cycle In A Directed Graph: [https://www.codingninjas.com/studio/problems/detect-cycle-in-a-directed-graph_1062626?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar]

``` cpp
1.                              //Depth First Search
    bool isCycleDFS (int node, unordered_map <int, list <int>> &adj, 
                     unordered_map <int, bool> &visited, unordered_map <int, bool> &dfsvisited) {
    
    visited[node] = true;
    dfsvisited[node] = true;

    for (int neighbour:adj[node]) {
        if (!visited[neighbour]) {
            bool ans = isCycleDFS(neighbour, adj, visited, dfsvisited);
            
            if(ans)
                return true;
        } 
        else if (dfsvisited[neighbour])
            return true;
    }
    dfsvisited[node] = false;
    return false;
}

int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  
  // create an adjacency list
  unordered_map <int, list <int>> adj;
    for (int i = 0; i < edges.size(); i++) {
            int u = edges[i].first;
            int v = edges[i].second;

            adj[u].push_back(v);
    }

    unordered_map <int, bool> visited;
    unordered_map <int, bool> dfsvisited;

    for (int i = 1; i <= n; i++) {

        if (!visited[i]) {
            bool ans = isCycleDFS(i, adj, visited, dfsvisited);
            
            if (ans) 
                return true;
        }
    }
    return false;
}
```

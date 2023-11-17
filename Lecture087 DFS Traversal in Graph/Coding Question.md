# Coding Quesion

1. DFS Traversal: [https://www.codingninjas.com/studio/problems/dfs-traversal_630462?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=PROBLEM]

``` cpp
1. void dfs (int node, unordered_map <int, list <int> > &adj, unordered_map <int, bool> &visited, vector <int> &component) {

    component.push_back(node);
    visited[node] = 1;

    for(auto i:adj[node]){
        if(!visited[i]){
            dfs(i, adj, visited, component);
        }
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges) {

    unordered_map <int, list <int> > adj;

    for(int i = 0; i < edges.size(); i++) {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector <vector <int>> ans;
    unordered_map <int, bool> visited;

    for(int i = 0; i < V; i++) {
        if(!visited[i]){
            vector <int> component;
            dfs(i, adj, visited, component);
            ans.push_back(component);
        }
    }
    return ans;
}
```

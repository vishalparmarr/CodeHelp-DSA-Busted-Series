# Coding Quesion

1. Detect Cycle In A Directed Graph: [https://www.codingninjas.com/studio/problems/detect-cycle-in-a-directed-graph_1062626?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar]

``` cpp
1. int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  
    // create an adjacency list
    vector<vector<int>> adj(n+1);
    vector<int> indegree(n+1,0);

    for(auto i:edges) {
        adj[i.first].push_back(i.second);
        indegree[i.second]++;
    }

    // 0 indegree push in queue
    queue <int> q;
    for(int i = 1; i <= n; i++) {
        if(indegree[i] == 0)
            q.push(i);
    }

    //BFS algorithm
    int cnt = 0;
    while (!q.empty()){
        int front = q.front();
        q.pop();
        cnt++;

        for(auto neighbour:adj[front]) {
            indegree[neighbour]--;
            if(indegree[neighbour] == 0)
                q.push(neighbour);
        }
    }
    
    if (cnt == n)
        return false;
    else
        return true;
}
```
